/*
Name:LAURENCE ODUORI OCHIENG
Reg No:CT101/G/26674/25
Description:C function for temperature conversion
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(fahrenheit));

    return 0;
}