#include <stdio.h>
#include <math.h>

int main() {
    const int array_size = 10;
    int i;
    double sum = 0;
    double array[array_size];
    for (i = 0; i < array_size; i++) {
        int num;
        printf("input element %d: ", i);
        scanf("%d", &num);
        array[i] = num;
    }
    for (i = 0; i < array_size; i++) {
        if(array[i] > exp(1)) {
            sum += array[i];
        }
    }
    printf("%lf\n", sum);
}
