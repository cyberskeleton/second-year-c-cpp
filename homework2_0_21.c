#include <stdio.h>

double sum(double array[], int n) {
    int i;
    int sum = 0;
    for (i = 0; i < (n-1); i++) {
        float x1 = array[i+1] - array[i]*array[i];
        float x2 = array[i] - 1;
        int sum_part = 100*x1*x1 + x2*x2;
        sum += sum_part;
     }
    return sum;
}

double input(double array[], int n) {
    int i;
    int element;
    for (i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &element);
        array[i] = element;
    }
    return 0;
}

int main() {
    int N;
    printf("input array size: ");
    scanf("%d", &N);
    double numbers[N];
    input(numbers, N);
    printf("sum: %lf\n", sum(numbers, N));
}
