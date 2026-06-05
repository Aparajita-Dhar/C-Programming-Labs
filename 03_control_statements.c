#include <stdio.h>

/* 
   Topic: Control Statements (Decision Making)
   This program analyzes a performance score and categorizes it using conditional logic.
*/

int main() {
    int project_score = 85;

    printf("Evaluating system performance score: %d\n", project_score);

    // Conditional If-Else If-Else structure
    if (project_score >= 90) {
        printf("Category: Exceptional Performance.\n");
    } 
    else if (project_score >= 75) {
        printf("Category: Optimal Efficiency.\n"); // This block will execute
    } 
    else if (project_score >= 50) {
        printf("Category: Needs System Tuning.\n");
    } 
    else {
        printf("Category: Critical Failure. Immediate action required.\n");
    }

    return 0;
}
