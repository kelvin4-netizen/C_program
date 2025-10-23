/*
NAME:kelvin mucheru
REG NO:CT101/G/26445/25
DESCRIPTION:A program that converts temperature from fahreheits to degree celsius
*/
#include <stdio.h>

int main(){
	float C ,F ;
	printf("enter the temperature in Fahrenheit_____");
	scanf("%f",&F);
	
	C = (F-32) * 5/9;
	
	printf("\n the temperature in degree celsius is %.2f",C);
	
	return 0;
	
}

	