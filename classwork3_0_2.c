#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int input(int *array) {
    int i = 0;
    do {
        printf("input array[%d]: ", i);
        scanf("%d", &array[i]);
        //printf("size: %lu\n", sizeof(array));
        ++i;
        size_t size = i;
        int* new_array = (int *) realloc(array, size * sizeof(int));
        array = new_array;
    } while (array[i - 1] != 0);

    return sizeof(array);
}

void count_squares(int *array) {
    int count = 0, i = 0;
    if (array[i] == 0) {
        return;
    }
    do {
        if(sqrt(array[i]) == round(sqrt(array[i])) && array[i] != 0) {
            count += 1;
        }
        i++;
    } while (array[i - 1] != 0);
    printf("number of full squares: %d\n", count);
}

void count_cubes(int *array) {
    int count = 0, i = 0;
    if (array[i] == 0) {
        return;
    }
    do {
        float x = cbrt(array[i]);
        float y = round(x);
        //printf("%lf  ", x);
        //printf("%lf\n", y);
        if((x == y) && array[i] != 0) {
            count += 1;
        }
        i++;
    } while (array[i - 1] != 0);
    printf("number of full cubes: %d\n", count);
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
    count_squares(array);
    count_cubes(array);
    free(array);
}
