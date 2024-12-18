const SerialPort = require('serialport');
const { ReadlineParser } = require('@serialport/parser-readline');

var port = new SerialPort('COM12', { 
    baudRate: 9600,
    dataBits: 8,
    parity: 'none',
    stopBits: 1,
    flowControl: false
});

const parser = port.pipe(new ReadlineParser({ delimiter: '\r\n' }));

port.on('error', (err) => {
    console.error('Error opening serial port:', err);
});

port.on('open', () => {
    console.log('Serial port is open');
});

var http = require('http');
var app = http.createServer(function(req, res) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.end('<html><body><h1>Distance Data</h1></body></html>');
});

var io = require('socket.io')(app);

io.on('connection', function(socket) {
    console.log('Node is listening to port');
});

parser.on('data', function(data) {
    console.log('Received data from port: ' + data);
    io.emit('data', data); 
});

app.listen(3000, () => {
    console.log('Server is running on http://localhost:3000');
});
