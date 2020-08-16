# raspberry pi zero w
* there are different libraries out there to control the GPIO
* for python3 you can use `gpiozero`
* for c/c++ you can use `wiringPi`
    * this will also deliver the `gpio` tool
    * ex. with the following command you can list the current GPIO status: `gpio readall`
* the GPIO pins have two states: `IN` / `OUT`
