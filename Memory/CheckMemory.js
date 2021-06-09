// checkmem.js 
const os = require('os');
print = console.log;
setInterval(print, 2000, os.freemem());
