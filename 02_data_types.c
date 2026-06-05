#include <stdio.h>

/* 
   Topic: C Programming with Data Types
   Demonstrates integer, floating-point numbers, characters, and their sizes.
*/

int main() {
    // Declaring and initializing standard data types
    int age = 21;
    float gpa = 3.85;
    double macro_index = 98.456721; // Double precision floating point
    char grade = 'A';

    // Displaying the values using format specifiers
    printf("--- Student Record Data Types ---\n");
    printf("Age (Integer): %d\n", age);
    printf("GPA (Float): %.2f\n", gpa);
    printf("Macro Index (Double): %.6f\n", macro_index);
    printf("Final Grade (Character): %c\n", grade);
    
    // Showing memory consumption using sizeof()
    printf("\n--- Memory Allocation (Bytes) ---\n");
    printf("Size of int: %lu bytes\n", sizeof(age));
    printf("Size of float: %lu bytes\n", sizeof(gpa));
    printf("Size of char: %lu byte\n", sizeof(grade));

    return 0;
}
