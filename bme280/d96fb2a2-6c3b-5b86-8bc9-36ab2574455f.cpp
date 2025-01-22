float getPressure{{ instance }}() {
    const float pressure_hPa = bme{{ instance }}.readPressure() / 100.0F;
    return pressure_hPa;
}
