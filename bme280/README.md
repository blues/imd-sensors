BME280
======

This sensor code fragment is implemented as a wrapper around the Adafruit
BME280 library.

Hardware
--------

### Wiring

The BME280 is expected to be connected via I2C, preferably using a Qwiic
connector cable.

Firmware
--------

### Libraries

The Arduino library dependencies (enumerated in `dependencies.json`) are
expected to be installed by the user, prior to compiling the generated
application firmware.

### Data Points

Values

- Relative Humidity (%)
- Pressure (hPa)
- Temperature (C)

_**NOTE:** All values are returned as floats._
