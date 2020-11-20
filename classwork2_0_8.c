#include <stdio.h>

#define size 20

int input(int v[]) {
    int i;
    int element;
    for (i = 0; i < size; i++) {
        if (element != 0) {
            printf("array[%d] = ", i);
            scanf("%d", &element);
            v[i] = element;
        }
        else {return i-1;}
    }
}

int product(int v[], int n) {
    int i;
    int product = 1;
    for (i = 0; i < n; i++) {
        product *= v[i];
    }
    return product;
}

float harmonic_mean(int v[], int n) {
    int i;
    float result;
    float denominator = 0;
    for (i = 0; i < n; i++) {
        float add = 1.0/v[i];
        denominator = denominator + add;
    }
    result = n/denominator;
    return result;
}

int main() {
    int array[size];
    int num = input(array);
    int element_product = product(array, num);
    printf("number of elements in array: %d\n", num);
    printf("product of array elements: %d\n", element_product);
    printf("harmonic mean: %f\n", harmonic_mean(array, num));
}
