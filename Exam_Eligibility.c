/*
Name:MUCHERU KELVIN MAINA
Reg No. :CT101\G\26445\25
Date:02\10\25
Description :  program that checks if a student is eligible for final exams
*/
# include <stdio.h>

int main(){
	int attendance, marks ;
	char name[50];
	
	printf("Enter your name\ ");
	scanf("%s", &name);
	
    printf("Enter the average marks: ");
	scanf("%d", &marks);
	
	printf("\n Enter the percentage of the number of attendances: ");
	scanf("%d", &attendance );
	
	if (attendance >= 75 & marks >= 40){
		printf(" \n%s you are eligible for the exam\n", name);
	} else { 
		printf("\n%s  not eligible\n  ", name);
	}		
	
	
	
	return 0;
	
}	