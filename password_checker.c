/*
Name: Mucheru Kelvin Maina 
Reg no: CT101/G/26445/25
Description: Password check system
*/


#include<stdio.h>

int main(){
int password;

do{

printf("\nEnter your password.\n");
scanf("%d",& password);

if(password==1234){
break;
}
printf("\nIncorrect password! Please try again. \n");
}
while (1);
printf(" \nAccess Granted. \n");
printf("Welcome user .");

	return 0;
}
		