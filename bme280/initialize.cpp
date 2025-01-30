//TODO: Select the appropriate I2C address for your sensor.
// The `Adafruit_BME280::begin` method will initialize the sensor with the I2C
// address 0x77 by default. If the sensor is wired to use the alternate I2C
// address, 0x76, then uncomment the line below.
// if (!bme{{ instance }}.begin(BME280_ADDRESS_ALTERNATE)) {
if (!bme{{ instance }}.begin()) {
        Serial.println("Could not find a valid BME280 sensor, check wiring, address, sensor ID!");
}
