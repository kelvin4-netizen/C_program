/*
Name: KELVIN MAINA MUCHERU
Reg no : CT101\G\26445\25
Description: 3D Array
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10], branch, floor, room, total = 0, occupied;

    srand(time(0));

    printf("Hotel Chain Occupancy Tracker \n");
	printf("------------------------------ \n");
    for (branch = 0; branch < 3; branch++) {
        printf("BRANCH %d:\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            occupied = 0;

            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    occupied++;
            }

            printf("  Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, 10 - occupied);
            total += occupied;
        }
        printf("\n");
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", total);

    return 0;
}