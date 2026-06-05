#include <stdio.h>

/* 
   Topic: Arrays in C
   Demonstrates storing multiple matching values in a single continuous memory block.
*/

int main() {
    // Declaring an array of integers with a size of 5 elements
    int daily_server_pings[5] = {120, 450, 310, 280, 600};
    int total_pings = 0;

    printf("--- Accessing Array Elements ---\n");
    // Reading individual elements using index numbers (Starting from index 0)
    printf("Day 1 Pings (Index 0): %d\n", daily_server_pings[0]);
    printf("Day 5 Pings (Index 4): %d\n", daily_server_pings[4]);

    printf("\n--- Summing Array Elements via Loop ---\n");
    // Iterating through the entire array using a loop to sum the data
    for (int i = 0; i < 5; i++) {
        total_pings += daily_server_pings[i];
    }
    
    printf("Total network pings across 5 days: %d\n", total_pings);

    return 0;
}
