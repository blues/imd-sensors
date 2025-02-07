float getAltitude{{ instance }}() {
    const float altitude_m = bmp{{ instance }}.readAltitude(SEA_LEVEL_hPa);
    return altitude_m;
}
