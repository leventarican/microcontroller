# microcontroller

## Elektronik
* Transistor
* Kondensator
    * Wiki: _Blockkondensator (auch Abblockkondensator, Stützkondensator oder Siebkondensator) bezeichnet in der Elektrotechnik einen Kondensator, der in einer Schaltung die Betriebsspannung an lokalen Schaltkreisen aufrechterhält._

## AVR
__tools__
* dmesg: list kernel ring buffer

* avrdude: for programmer, transfer code from computer to microcontroller
* gcc-avr: compiler for AVR
* avr-libc: AVR C library

_optional tools_
* binutils-avr: tools like assembler, linker
* gdb-avr: debugger for 

__compile, build and flash__
```
avr-gcc -mmcu=attiny85 -Os -c main.c  -o main.o
avr-gcc main.o -o main.elf
avr-objcopy -O ihex -j .text -j .data main.elf main.hex
avr-size --mcu=attiny85 -C main.elf 
avrdude -p attiny85 -c usbasp -U flash:w:main.hex:a
``` 

__cheatsheet__
* list supported uController: `avrdude -p?`
* check connection between programmer (e.g. USBasp, AVRISP, ...): `avrdude -p attiny85 -c usbasp` or `avrdude -p t85 -c usbasp`

## ESP32 (M5Stack)
* ESP32 is implemented in M5Stack
* Espressif ESP32 is the successor of Espressif ESP8266
* example based on linux (ubuntu)

### PlatformIO
* install PlatformIO as extension in vscode or atom

### create new project
* Board: M5Stack Core ESP32
* Framework: Arduino

### run (ide)
* build 'PlatformIO: Build'
* upload 'PlatformIO: Upload'

### run (command line)
```
pio run
```

### throubleshooting
__Issue__
```
[Errno 13] Permission denied: '/dev/ttyUSB0'
```
__Solution__
```
sudo chmod 666 /dev/ttyUSB0
```

