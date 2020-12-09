#include <stdio.h>
#include <stdlib.h>

void input(int rows, int cols, int **arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int element = rand() % 100;
            arr[i][j] = element;
        }
    }
}

void print(int rows, int cols, int **arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int delete_column(int k, int rows, int cols, int **arr) {
    for (int j = 0; j < rows; j++) {
        for (int i = k; i < cols - 1; i++) {
            arr[j][i] = arr[j][i + 1];
        }
    }
    return --cols;
}

int main() {
    int rows, cols, k;
    printf("input rows, cols, k: ");
    scanf("%d, %d, %d", &rows, &cols, &k);
    int** arr = (int**) malloc(cols * sizeof(*arr));
    for (int i = 0; i < rows; i++){
        arr[i] = malloc(rows * sizeof(int));
    }
    input(rows, cols, arr);
    printf("before: \n");
    print(rows, cols, arr);
    cols = delete_column(k, rows, cols, arr);
    printf("after: \n");
    print(rows, cols, arr);
    free(arr);
    return 0;
}
