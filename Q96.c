Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

  #include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    scanf(" %[^\n]", str);

    while (1) {
        if (str[end] == ' ' || str[end] == '\0') {

            for (int i = end - 1; i >= start; i--) {
                printf("%c", str[i]);
            }

            if (str[end] == '\0') {
                break;
            }

            printf(" ");
            start = end + 1;
        }

        end++;
    }

    return 0;
}
