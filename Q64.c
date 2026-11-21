Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    long long int num;
    int count[10] = {0}; 
    int maxCount = 0; 
    int mostFrequentDigit = 0; 

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    
    while (num > 0) {
        int digit = num % 10; 
        count[digit]++; 
        num /= 10; 
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    return 0;
}
