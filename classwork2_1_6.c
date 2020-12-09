#include <stdio.h>

#define N 10
#define M 10
int input(int matrix[N][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value %d %d:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

void print(int matrix[N][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int find_sum(int matrix[N][M], int n, int m, int k){
    int sum = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i - j == k) {
                sum += matrix[i][j];
            }
        }
    }
    printf("sum: %d\n", sum);
}

int main() {
    int n, m, k;
    printf("input dimensions: ");
    scanf("%d, %d", &n, &m);
    printf("input k: ");
    scanf("%d", &k);
    int matrix[N][M];
    input(matrix, n, m);
    print(matrix, n, m);
    find_sum(matrix, n, m, k);
}
