Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main(void) {
    int rowsA, colsA;
    scanf("%d %d", &rowsA, &colsA);

    int a[rowsA][colsA];

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int rowsB, colsB;
    scanf("%d %d", &rowsB, &colsB);

    int b[rowsB][colsB];

    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (colsA == rowsB) {
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                int sum = 0;

                for (int k = 0; k < colsA; k++) {
                    sum += a[i][k] * b[k][j];
                }

                if (j > 0) {
                    printf(" ");
                }
                printf("%d", sum);
            }
            printf("\n");
        }
    }

    return 0;
}
