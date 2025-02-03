float getPressure{{ instance }}() {
    const float pressure_hPa = bmp{{ instance }}.readPressure();
    return pressure_hPa;
}
