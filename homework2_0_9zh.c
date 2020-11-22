#include <stdio.h>
#include <math.h>

int is_fib(int array[], int n) {
    int i;
    int fib_counter = 0;
    int root1, root2;
    for (i = 0; i < n; i++) {
        int x1 = 5 * array[i] * array[i] + 4;
        int x2 = 5 * array[i] * array[i] - 4;
        root1 = sqrt(x1);
        root2 = sqrt(x2);
        if ((root1*root1 == x1) || (root2*root2 == x2)) {
            fib_counter++;
        }
    }
    return fib_counter;
}

int input(int array[], int n) {
    int i;
    int element;
    for (i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &element);
        array[i] = element;
    }
    return 0;
}

int main () {
    int N;
    printf("input array size: ");
    scanf("%d", &N);
    int numbers[N];
    input(numbers, N);
    printf("this array contains %d fibonacci numbers\n", is_fib(numbers, N));
}
