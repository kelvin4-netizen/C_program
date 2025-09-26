/*
Name:Mucheru Kelvin Maina
Reg no:CT101/G/26445/25
Date:24/09/2025
Description:a program that checks if a person qualifies for a loan.
*/
#include<stdio.h>

int main() {
	
	int age;
	float annualincome;
	
	printf("enter your age \n");
	scanf("%d", &age);
	
	printf("\n Enter your annual income  ksh.");
	scanf("%f", &annualincome);
	
	if (age >=21 && annualincome >=21000){
		printf("Congratulation you qualify for a loan");
	} else {
		printf("Unfortunately we are unable to offer you a loan at this time");
	}		
	
	
		return 0;
}	