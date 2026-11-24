Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
    char str[100];
    int len;

    scanf("%s", str);

    for (len = 0; str[len] != '\0'; len++);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {

            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (i != len - 1 || j != len - 1) {
                printf(",");
            }
        }
    }

    return 0;
}
