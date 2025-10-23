/*
NAME:Kelvin mucheru
REG NO:CT101/G/26445/25
DESCRIPTION:a program to calculate electric bill
*/

#include <stdio.h>

int main() {
    int units;
    
    float bill;

    printf("ENTER THE UNITS CONSUMED----");
    scanf("%d", &units);
    
    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) { 
        bill = 100 * 10 + ((units - 100) * 15);
    } else {
        bill = 100 * 10 + 100 * 15 + ((units - 200) * 20);
    }
    printf("TOTAL BILL = Ksh. %.2f\n", bill); 
    return 0;
}