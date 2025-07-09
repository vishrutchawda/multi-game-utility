#include <stdio.h>

void weightConversion() {
    float kg, grams, pounds;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    grams = kg * 1000;
    pounds = kg * 2.20462;
    printf("Weight in grams: %.2f\n", grams);
    printf("Weight in pounds: %.2f\n", pounds);
}

void lengthConversion() {
    float meters, feet, inches;
    printf("Enter length in meters: ");
    scanf("%f", &meters);
    feet = meters * 3.28084;
    inches = meters * 39.3701;
    printf("Length in feet: %.2f\n", feet);
    printf("Length in inches: %.2f\n", inches);
}

void volumeConversion() {
    float liters, gallons;
    printf("Enter volume in liters: ");
    scanf("%f", &liters);
    gallons = liters * 0.264172;
    printf("Volume in gallons: %.2f\n", gallons);
}

void speedConversion() {
    float mps, kph, mph;
    printf("Enter speed in meters per second: ");
    scanf("%f", &mps);
    kph = mps * 3.6;
    mph = mps * 2.23694;
    printf("Speed in kilometers per hour: %.2f\n", kph);
    printf("Speed in miles per hour: %.2f\n", mph);
}

void dataConversion() {
    float bytes, kilobytes, megabytes;
    printf("Enter data in bytes: ");
    scanf("%f", &bytes);
    kilobytes = bytes / 1024;
    megabytes = bytes / (1024 * 1024);
    printf("Data in kilobytes: %.2f\n", kilobytes);
    printf("Data in megabytes: %.2f\n", megabytes);
}

void timeConversion() {
    float seconds, minutes, hours;
    printf("Enter time in seconds: ");
    scanf("%f", &seconds);
    minutes = seconds / 60;
    hours = seconds / 3600;
    printf("Time in minutes: %.2f\n", minutes);
    printf("Time in hours: %.2f\n", hours);
}

void temperatureConversion() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}

