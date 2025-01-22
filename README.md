IMD Sensors
===========

This repository is designed to provide an extensible collection of sensor
definitions to the Intelligent Machine Designer.

Components
----------

### `dataPoints.json`

This file provides a partial JSON library manifest fragment (the complete
`dataPoints` array). The elements of the array enumerate the type of data the
sensor is capable of sampling. Each of the elements describe the bounds of the
data, and can be consumed by the IMD UI to be placed directly into the resulting
`manifest.json` file.

Each data point contains a sensor name and a UUID key to the implementation.
The sensor name is the name of the folder it originated from in this repository,
and the UUID provides a link to the function definition required to sample the
sensor.

### `dependencies.json`

This file provides the details required to install the dependencies for a given
platform.

### `include.cpp`

The code fragment responsible for including all the header files required by the
sensor implementation.

### `initialize.cpp`

The code fragment responsible for initializing the object. This is typically
used to bind the hardware to library, or initialize values in the object.

### `instantiate.cpp`

The code fragment responsible for instantiating the underlying object, which
will contain the state of the sensor.

Firmware
--------

### Multiple Instance Support

The firmware generator can support multiple instances, so long as you use the
instance replacement syntax, `{{ instance }}`. `{{ instance }}` will be replaced
by a number, allowing both objects and function signatures to remain unique.

**Example:**

`instantiate.cpp`

```cpp
Adafruit_BME280 bme{{ instance }}; // I2C
```

may be generated as:

```cpp
Adafruit_BME280 bme1; // I2C
Adafruit_BME280 bme2; // I2C
```
