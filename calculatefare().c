/*
NAME:kelvin mucheru
REG NO:CT101/G/26445/25
DESCRIPTION:A program that calculates the fare of a person depending on the number of km used
*/
#include <stdio.h>

float Fare(float distance) {
    float rate = 50.0;//fare rate per km
    return distance * rate; 
} 

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", Fare(distance));
    return 0;
}