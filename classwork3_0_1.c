#include <stdio.h>
#include <stdlib.h>

void input(int n, double *array) {
    for (int i = 0; i < n; i++) {
        printf("input array[%d]: ", i);
        scanf("%lf", &array[i]);
    }
}

void sum_squares(int n, double *array) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i]*array[i];
    }
    printf("sum of squared elements: %lf\n", sum);
}

void print(int n, double *array) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%lf ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("input array size: ");
    scanf("%d", &n);
    double *array = malloc(n*sizeof(double));
    input(n, array);
    print(n, array);
    sum_squares(n, array);
    free(array);
}
