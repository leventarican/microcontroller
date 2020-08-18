# raspberry pi zero w
* there are different libraries out there to control the GPIO
* for python3 you can use `gpiozero`
* for c/c++ (python, java) you can use `wiringPi`
    * this will also deliver the `gpio` tool
    * ex. with the following command you can list the current GPIO status: `gpio readall`
* the GPIO pins have two states: `IN` / `OUT`

## cheatsheet
```
// copy from local to pi
scp a.file pi@192.168.1.1:home/

// copy from pi to local
scp pi@192.168.1.1:home/a.file .
```
* commonly a multimeter, has function for a diode test
* GPIO: General Purpose Input Output
* VCC: Voltage at the Common Collector (+ connection)
* https://raw.githubusercontent.com/Freenove/Freenove_Super_Starter_Kit_for_Raspberry_Pi/master/Tutorial.pdf
* https://gpiozero.readthedocs.io/en/stable/#
