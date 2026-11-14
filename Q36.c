Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int num1,num2,num3,hcf;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    num3=num1<num2?num1:num2;
    for(int i=num3;i>=1;i--){
        if(num1%i==0 && num2%i==0){
            hcf=i;
            break;
        }
    }
    printf("HCF of %d and %d is %d", num1, num2, hcf);

}
