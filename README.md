# microcontroller ESP32 (M5Stack)
* ESP32 is implemented in M5Stack
* Espressif ESP32 is the successor of Espressif ESP8266
* example based on linux (ubuntu)

## PlatformIO
* install PlatformIO as extension in vscode or atom

## create new project
* Board: M5Stack Core ESP32
* Framework: Arduino

## run (ide)
* build 'PlatformIO: Build'
* upload 'PlatformIO: Upload'

## run (command line)
```
pio run
```

## throubleshooting
__Issue__
```
[Errno 13] Permission denied: '/dev/ttyUSB0'
```
__Solution__
```
sudo chmod 666 /dev/ttyUSB0
```

