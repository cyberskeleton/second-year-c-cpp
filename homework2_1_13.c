#include <stdio.h>

#define N 10
#define M 10
int input(int matrix[N][M], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
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

int find_min (int matrix[N][M], int a, int b) {
    int i, j;
    int j_min, min;
    for (j = 0; j < b; j++) {
        for (i = 0; i < a; i++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                j_min = j;
            }
        }
    }
    return j_min;
}

int find_max (int matrix[N][M], int a, int b) {
    int i, j;
    int max;
    int j_max;
    for (j = 0; j < b; j++) {
        for (i = 0; i < a; i++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                j_max = j;
            }
        }
    }
    return j_max;
}

void swap(int matrix[N][M], int a, int col_min, int col_max) {
    for (int i = 0; i < a; i++) {
        int temp;
        temp = matrix[i][col_min];
        matrix[i][col_min] = matrix[i][col_max];
        matrix[i][col_max] = temp;
    }
}

int main() {
    int n, m;
    printf("n, m: ");
    scanf("%d, %d", &n, &m);
    int matrix[N][M];
    input(matrix, n, m);
    int min =find_min(matrix, n, m);
    int max = find_max(matrix, n, m);
    swap(matrix, n, min, max);
    print(matrix, n, m);
}
