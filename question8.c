Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main() {
    int a, b;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Swapping without using a third variable
    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract new 'b' from 'a' to get original 'a'
    a = a - b; // Step 3: Subtract new 'b' from new 'a' to get original 'b'
    
    // Output the swapped values
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}
