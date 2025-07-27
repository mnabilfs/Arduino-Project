const { SerialPort } = require("serialport");
const { ReadlineParser } = require("@serialport/parser-readline");
const { Server } = require("socket.io");
const http = require("http");
const express = require("express");
const path = require("path");

const app = express();
const server = http.createServer(app);
const io = new Server(server);

app.use(express.json());
app.get("/", (req, res) => {
  res.sendFile(path.join(__dirname, "/views/index.html"));
});

io.on("connection", (socket) => {
  console.log("connected...");
  socket.on("disconnect", () => {
    console.log("disconnect");
  });
});

app.listen(3000, () => {
  console.log("server on!");
});

// koneksifitas serial arduino
const port = new SerialPort({
  path: "COM12",
  baudRate: 19200,
});

// parsing data dari arduino
const parser = port.pipe(new ReadlineParser({ delimiter: "\r\n" }));

// tangkap data dari arduino
parser.on("data", (result) => {
  console.log("data dari arduino -> ", result);
  io.emit("data", { data: result });
});

app.post("/arduinoApi", (req, res) => {
  const data = req.body.data;
  port.write(data, (err) => {
    if (err) {
      console.log("error: ", err);
      res.status(500).json({ error: "write data error!" });
    }
    console.log("data terkirim: ", data);
    res.end();
  });
});
