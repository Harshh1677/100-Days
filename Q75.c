Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
  #include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int first[rows][cols];
    int second[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", first[i][j] + second[i][j]);
        }
        printf("\n");
    }

    return 0;
}
