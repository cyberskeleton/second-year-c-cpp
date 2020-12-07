#include <stdio.h>

#define N 10
#define M 10
int input(int matrix[N][M], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++) {
        printf("input from matrix[%d][0] to matrix[%d][%d]: ", i, i, b-1);
        for (j = 0; j < b; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

void print(int matrix[N][M], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n, m;
    printf("n, m: ");
    scanf("%d, %d", &n, &m);
    int matrix[N][M];
    input(matrix, n, m);
    print(matrix, n, m);
}
