float getTemperature{{ instance }}() {
    const float temperature_C = bme{{ instance }}.readTemperature();
    return temperature_C;
}
