#include <stdio.h>

int main() {
    int i = 0;
    float num, sum = 0;
    while (num != 0) {
        sum += num;
        printf("a[%d]= ", i);
        scanf("%f", &num);
        i += 1;
    }
    printf("end result: %f\n", sum);
}
