#include <stdio.h>
#include <stdlib.h>

void input(int rows, int cols, int **arr) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            int element;
            printf("input element: ");
            scanf("%d", &element);
            arr[r][c] = element;
        }
    }
}

void print(int rows, int cols, int **arr) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
}

void input_3d(int rows, int cols, int height, int*** array) {
    for(int h = 0; h < height; h++) {
        input(rows, cols, array[h]);
        print(rows, cols, array[h]);
        printf("\n");
    }
}

void print_3d(int rows, int cols, int height, int*** array) {
    for(int h = 0; h < height; h++) {
        print(rows, cols, array[h]);
        printf("\n");
    }
}

void multiply(int rows, int cols, int height, int*** array, int** result) {
    printf("multiplying...\n");

    for (int h = 1; h < height; h++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                //printf("calculating...");
                for (int k = 0; k < rows; k++) {
                    result[i][j] += array[h - 1][i][k] * array[h][k][j];
                }
                printf("result[%d][%d]: %d\n", i, j, result[i][j]);
            }
        }
    }
    printf("...multiplication complete\n");
}

void free_mem(int* arr1, int** arr2, int*** arr3) {
    if (arr1 != NULL) free(arr1);
    if (arr2 != NULL) free(arr2);
    if (arr3 != NULL) free(arr3);
}

int main() {
    int rows, cols, height;
    int ***array;
    printf("input rows, columns, height: ");
    scanf("%d, %d, %d", &rows, &cols, &height);

    array = (int ***) malloc(height * sizeof(int**));
    for (int h = 0; h < height; h++) {
        array[h] = (int**) malloc(sizeof(int*) * height);
        for (int r = 0; r < rows; r++) {
            array[h][r] = (int*) malloc(sizeof(int) * rows);
        }
    }
    input_3d(rows, cols, height, array);
    printf("3d array:\n");
    print_3d(rows, cols, height, array);

    int** result = malloc(rows * sizeof(int*));
    printf("result allocated\n");
    for (int i = 0; i < rows; i++){
        result[i] = malloc(rows * sizeof(int));
    }
    printf("result[i] allocated\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            printf("result[%d][%d] nullified: %d\n", i, j, result[i][j]);
        }
    }
    print(rows, cols, result);
    multiply(rows, cols, height, array, result);
    print(rows, cols, result);
    free_mem(NULL, result, array);
    return 0;
}
