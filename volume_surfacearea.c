/*
Name:Mucheru Kelvin Maina
Reg no:CT101/G/26445/25
Date:24/9/2025
Description:a program that calculates both the volume and sarface area of a cylinder.
*/
#include<stdio.h>

int main() {
	
	
	float radius, height, volume, surfacearea;
	
	printf("Pi = 3.142 \n");
	printf("Enter the radius of the cylinder \n");
	scanf(" %f",&radius );
	
	printf("Enter the height of the cyliner \n");
	scanf(" %f",&height);
	
	volume =  3.142 * radius * radius * height;
	printf(" \n volume is %.2f cm^3", volume);
	
	surfacearea = (2 * 3.142) * radius * radius + (2 * 3.142) * radius * height; 
	printf("\n surface_area is %.2f cm^2", surfacearea);
	
	return 0;
}	