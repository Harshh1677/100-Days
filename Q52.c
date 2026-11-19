Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() {
    // Print the first block of stars
    for (int i = 0; i < 4; i++) {
        printf("*\n");
    }
    printf("\n"); // New line between blocks

    // Print the second block of stars
    for (int i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n"); // New line between blocks

    // Print the third block of stars
    for (int i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n"); // New line between blocks

    // Print the last single star
    printf("*\n");

    return 0;
}
