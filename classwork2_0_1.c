#include <stdio.h>

int main() {
    int count = 0, i = 0;
    int n, num;
    printf("input n: ");
    scanf("%d", &n);
    double array[5];
    for (int i = 0; i < 5; i++) {
        printf("input array element %d: ", i);
        scanf("%d", &num);
        array[i] = num;
    }
    while (i < 5) {
        if (array[i] < n) {
            count += 1;
        }
        i += 1;
    }
    printf("number of elements less than %d: %d\n", n, count);
}
