Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main() {        
        
    int n, sum = 0;

    // Prompt user for input
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum=%d\n", sum);

    return 0;
}
