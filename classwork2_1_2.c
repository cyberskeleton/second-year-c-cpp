#include <stdio.h>

int main() {
    int matrix[3][3], transposed[3][3];
    int i, j, I, J, a;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value %d %d:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            transposed[j][i] = matrix[i][j];
        }
//    printf("transposed matrix: \n");
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d ", transposed[i][j]);
//            if (j == 2) {
//                printf("\n");
//            }
//        }
//    }
    do {
        printf("input indexes of old element and new element, divide with comma: ");
        scanf("%d, %d, %d", &I, &J, &a);
    } while(I>2 || J>2 || I<0 || J<0);
    transposed[I][J] = a;
    printf("transposed matrix with replaced matrix[%d][%d]: \n", I, J);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transposed[i][j]);
            if (j == 2) {
                printf("\n");
            }
        }
    }
}
