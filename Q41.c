Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int num, firstdigit,lastdigit,swappednum,temp;
    printf("enter a number:");
    scanf("%d",&num);
    lastdigit=num%10;
    temp=num;
    while(temp>=10)
    {
        temp=temp/10;
        firstdigit=temp%10;
        swappednum=lastdigit;
        printf("%d",swappednum);
    }
    printf("%d",firstdigit);
    return 0;
}
