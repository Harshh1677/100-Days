Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
 #include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int printed = 0;

    for (int sum = 0; sum <= rows + cols - 2; sum++) {
        int startRow = sum < cols ? 0 : sum - cols + 1;
        int endRow = sum < rows ? sum : rows - 1;

        if (sum % 2 == 0) {
            for (int i = endRow; i >= startRow; i--) {
                int j = sum - i;
                if (j >= 0 && j < cols) {
                    if (printed > 0) printf(" ");
                    printf("%d", matrix[i][j]);
                    printed++;
                }
            }
        } else {
            for (int i = startRow; i <= endRow; i++) {
                int j = sum - i;
                if (j >= 0 && j < cols) {
                    if (printed > 0) printf(" ");
                    printf("%d", matrix[i][j]);
                    printed++;
                }
            }
        }
    }

    printf("\n");
    return 0;
} 
