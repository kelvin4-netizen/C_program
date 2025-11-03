#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define constants for clarity
#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    // 1. Use a 2D array occupancy[5][10]
    int occupancy[FLOORS][ROOMS_PER_FLOOR];

    // Seed the random number generator using current time
    // This ensures a different set of random values each time the program runs
    srand(time(NULL));

    printf("🏨 Branch Room Occupancy Report 🏨\n");
    printf("----------------------------------\n");

    // 2. Input random occupancy data (simulate input)
    // Outer loop for floors
    for (int i = 0; i < FLOORS; i++) {
        // Inner loop for rooms
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            // Assign a random value: 0 (vacant) or 1 (occupied)
            // rand() % 2 will result in 0 or 1
            occupancy[i][j] = rand() % 2;
        }
    }

    // 3. Display the number of occupied and vacant rooms per floor.
    printf("Detailed Occupancy Map (1=Occupied, 0=Vacant):\n");
    for (int i = 0; i < FLOORS; i++) {
        printf("Floor %d: ", i + 1); // Display floor number (1-indexed)
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            printf("%d ", occupancy[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------\n");

    printf("Summary of Occupancy by Floor:\n");
    
    // Loop to process and display the summary for each floor
    for (int i = 0; i < FLOORS; i++) {
        int occupied_count = 0;
        int vacant_count = 0;

        // Inner loop to count rooms on the current floor
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            if (occupancy[i][j] == 1) {
                occupied_count++; // Room is occupied
            } else { // Must be 0
                vacant_count++;   // Room is vacant
            }
        }

        // Display results for the current floor
        printf("Floor %d (Total Rooms: %d)\n", i + 1, ROOMS_PER_FLOOR);
        printf("  -> **Occupied**: %d rooms\n", occupied_count);
        printf("  -> **Vacant**:   %d rooms\n", vacant_count);
    }

    return 0;
}
