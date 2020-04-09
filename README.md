# Mic switcher

## Environment

* macOS 10.15

To control the input volume, micsw.py uses AppleScript, so it only works  on macOS.

## Requirements

* Arduino
* Python3
* pyserial

## How to use

* Connect a switch's wire to Arduino port (D2) and GND
* Flush firmware (mic-switcher.ino)
* Run micsw.py
* Push the switch to speak