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
and the UUID provides a link to the code fragment required to sample the sensor.

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
