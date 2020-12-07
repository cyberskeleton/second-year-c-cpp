#include <stdio.h>
#include <stdbool.h>
#define N 9

int input(int matrix[N][N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

bool is_upper(int i, int j, int n) {
    // printf("is_upper: %d, %d\n", i, j);
    return i > j;
}

bool is_left(int i, int j, int n) {
    // printf("is_left: %d, %d\n", i, j);
    return j > i;
}

void swap_vertical(int i, int j, int matrix[N][N], int n) {
    int temp = matrix[i][j];
    matrix[i][j] = matrix[i][n-1-j];
    matrix[i][n-1-j] = temp;
    // printf("swap_vertical(%d, %d -> %d, %d): %d -> %d\n", i, j, i, n-1-j, matrix[i][n-1-j], matrix[i][j]);
    return;
}

void swap_horizontal(int i, int j, int matrix[N][N], int n) {
    int temp = matrix[i][j];
    matrix[i][j] = matrix[n-1-i][j];
    matrix[n-1-i][j] = temp;
    // printf("swap_horizontal(%d, %d -> %d, %d): %d -> %d\n", i, j, n-1-i, j, matrix[n-1-i][j], matrix[i][j]);
    return;
}

void print(int matrix[N][N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main () {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    int matrix[N][N];
    input(matrix, n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-1; j++) {
            // printf("iteration: %d, %d\n", i, j);
            if (is_upper(i, j, n)) {
                swap_vertical(i, j, matrix, n);
            }
            if (is_left(i, j, n)) {
                swap_horizontal(i, j, matrix, n);
            }
        }
    }
    print(matrix, n);
}
