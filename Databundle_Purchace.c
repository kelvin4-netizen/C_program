/*
Name :KELVIN MAINA MUCHERU
Reg : CT101\G\26445\25
Date :10\2\2025
Description : PROGRAM THAT ALLOWS A USER TO SELECT DATA FOR PURCHACE
*/

# include<stdio.h>

int main(){
	int choice;
	printf("WELCOME TO MK DATA BUNDES \n");
	printf("select data bundles to purchace \n");
	printf("1. 100 MB @ Ksh. 50 \n");
	printf("2. 500 MB @ Ksh. 200 \n");
	printf("3. 1 GB    @ Ksh. 350 \n");
	printf("4. 2 GB    @ Ksh. 600 \n");
	
	printf("enter your choice (1-4):");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("You selected 100MB. Cost = KSH50 \n");
			break;
		case 2:
			printf("You selected 500MB. Cost = Ksh200 \n");
			break;
		case 3:
			printf("You selected 1GB. Cost = Ksh350 \n");
			break;
		case 4:
			printf("You selected 2GB. Cost = Ksh600 \n");
			break;
            default:
            	printf("Invalid choice \n");
	}
	return 0;
}