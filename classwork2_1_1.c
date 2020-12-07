#include <stdio.h>

int main() {
    int matrix[3][3], transposed[3][3];
    int i, j, n, m;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value %d %d:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("input element to replace and what to replace with: ");
    scanf("%d, %d", &m, &n);

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (matrix[i][j] == m) {
                    matrix[i][j] = n;
                }
            }
        }
        printf("original matrix with replaced elements: \n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matrix[i][j]);
                if (j == 2) {
                    printf("\n");
                }
            }
        }
        for (i = 0; i < 3; ++i)
            for (j = 0; j < 3; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        printf("transposed matrix: \n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", transposed[i][j]);
                if (j == 2) {
                    printf("\n");
                }
            }
        }
    }

