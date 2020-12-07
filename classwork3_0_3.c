#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int input(int *array) {
    int i = 0;
    do {
        printf("input array[%d]: ", i);
        scanf("%d", &array[i]);
        int size = ++i;
        array = (int *) realloc(array, size * sizeof(int));
    } while (array[i - 1] != 0);

    return sizeof(array);
}

bool is_power_of_two(int n) {
    if(n==0) {
        return false;
    }
    return (log2(n) == round(log2(n)));
}

bool is_power_of_three(int n) {
    if(n==0) {
        return false;
    }
    return (log(n)/log(3) == round(log(n)/log(3)));
}

void count_powers(int *array) {
    int count_2 = 0, count_3 = 0, i = 0;
    if (array[i] == 0) {
        return;
    }
    do {
        if(is_power_of_two(array[i]) && array[i] != 0) {
            count_2 += 1;
        }
        if(is_power_of_three(array[i]) && array[i] != 0) {
            count_3 += 1;
        }
        i++;
    } while (array[i - 1] != 0);
    printf("powers of two: %d\n", count_2);
    printf("powers of three: %d\n", count_3);
}

void print(int *array) {
    int i = 0;
    if (array[i] == 0) {
        printf("array is empty!\n");
        return;
    }
    do {
        printf("%d ", array[i]);
        i++;
    } while (array[i] != 0);
    printf("\n");
}

int main() {
    int *array = malloc(sizeof(int));
    input(array);
    print(array);
    count_powers(array);
    free(array);
}
