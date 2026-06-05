#include <stdio.h>

/* 
   Topic: Iteration and Loops
   Demonstrates using 'for' and 'while' loops to repeat logic efficiently.
*/

int main() {
    printf("--- 1. Automated Counting using a FOR Loop ---\n");
    // Standard 'for' loop: useful when you know exactly how many times to repeat
    for (int i = 1; i <= 5; i++) {
        printf("Processing batch system request #%d\n", i);
    }

    printf("\n--- 2. Conditional Processing using a WHILE Loop ---\n");
    int battery_charge = 100;
    
    // 'while' loop: repeats as long as a conditional statement stays true
    while (battery_charge > 70) {
        printf("System running stable. Current power level: %d%%\n", battery_charge);
        battery_charge -= 10; // Decrementing power level
    }
    printf("Power dropped below threshold. Stopping loop.\n");

    return 0;
}
