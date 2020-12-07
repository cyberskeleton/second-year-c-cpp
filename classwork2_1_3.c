#include <stdio.h>

int main() {
    int m, n;
    printf("input matrix dimensions, divide by comma: ");
    scanf("%d, %d", &m, &n);
    int matrix[m][n];
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
            if (j == n-1) {
                printf("\n");
            }
        }
    }
}
