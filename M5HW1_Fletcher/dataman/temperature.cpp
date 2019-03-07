float celToKelvin(float value)
{
    float sum = value + 273.15;
    return sum;
}
float kelvinToCel(float value)
{
    float sum = value - 273.15;
    return sum;
}
float CelToFahren(float value)
{
    float sum = (value*(9.0/5))+32;
    return sum;
}
float FahrenToCel(float value)
{
    float sum = (value-32);
    sum = sum *(5.0/9);
    return sum;
}
