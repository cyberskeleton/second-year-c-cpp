#include <stdio.h>

#define size 5

int main() {
    int i;
    int sum_even = 0, sum_odd = 0;
    int array[size];
    for (i = 0; i < size; i ++) {
        int num;
        printf("input element %d: ", i);
        scanf("%d", &num);
        array[i] = num;
    }
    for (i = 0; i < size; i ++) {
        if (array[i] % 2 == 0) {
            sum_even += array[i];
        }
        else {
            sum_odd += array[i];
        }
    }
    printf("even: %d, odd: %d\n", sum_even, sum_odd);
}
