Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, last = 0;

    scanf(" %[^\n]", str);

    // Find the starting position of the surname
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            last = i + 1;
        }
    }

    // Print initials of all words except surname
    for (i = 0; i < last - 1; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
    }

    // Print surname in full
    printf(" %s", str + last);

    return 0;
}
