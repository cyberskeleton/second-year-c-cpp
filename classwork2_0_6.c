#include <stdio.h>

int main() {
    int i = 0;
    float element;
    float sum = 0;
    while (element != 0) {
            printf("a[%d] = ", i);
            scanf("%f", &element);
            sum += element;
            i++;
        }

    printf("sum: %f\n", sum);
}
