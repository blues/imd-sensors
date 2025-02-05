float getTemperature{{ instance }}() {
    const float temperature_C = bmp{{ instance }}.readTemperature();
    return temperature_C;
}
