Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int gcd(int a,int b) {
    if(b==0)
    return a;
else
return gcd(b,a%b);
}
