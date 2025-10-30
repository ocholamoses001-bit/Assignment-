/*
NAME:Moses Ouma Ochola 
REG NO: PA106/G/28795/25
DESCRIPTION: C PROGRAM TO MANAGE ROOM OCCUPANCY IN A HOTEL CHAIN
*/
#include <stdio.h>

int main() {
    // 3D array: [branches][floors][rooms]
    int chain[3][5][10];

    // Variable to count total occupied rooms across all branches
    int totalOccupied = 0;

    // Fill the 3D array automatically with 1s and 0s
    // (1 = occupied, 0 = vacant)
    // Pattern formula ensures a mix of 1s and 0s
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = (room + floor + branch) % 2;

                // Count the number of occupied rooms
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    // Display occupancy report per branch
    printf("===== HOTEL OCCUPANCY REPORT =====\n\n");

    for (int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        int branchVacant = 0;

        printf("Branch %d:\n", branch + 1);

        for (int floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;
            int floorVacant = 0;

            for (int room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    floorOccupied++;
                else
                    floorVacant++;
            }

            // Add floor counts to branch totals
            branchOccupied += floorOccupied;
            branchVacant += floorVacant;

            printf("  Floor %d → Occupied: %d, Vacant: %d\n",
                   floor + 1, floorOccupied, floorVacant);
        }

        printf("  >> Total Occupied in Branch %d: %d\n", branch + 1, branchOccupied);
        printf("  >> Total Vacant in Branch %d: %d\n\n", branch + 1, branchVacant);
    }

    // Display overall total
    printf("===================================\n");
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
    printf("===================================\n");

    return 0;
}
