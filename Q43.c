Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int factroial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
    print main() {
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if(sum == num) {
        printf("Strong number");
    } else {
        printf("Not strong number");
    }
}
