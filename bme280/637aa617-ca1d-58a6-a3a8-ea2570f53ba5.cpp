float getHumidity{{ instance }}() {
    const float humidity_RH = bme{{ instance }}.readHumidity();
    return humidity_RH;
}
