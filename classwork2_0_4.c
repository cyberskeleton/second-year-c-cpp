#include <stdio.h>

#define size 5

int main() {
    int i, max, num;
    int array[size];
    for (i = 0; i < size; i++) {
        printf("input element %d: ", i);
        scanf("%d", &num);
        array[i] = num;
    }
    max = array[0];
    for (i = 1; i < size; i ++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("largest element: %d\n", max);
    return 0;
}
