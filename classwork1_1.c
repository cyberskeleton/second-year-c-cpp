#include <stdio.h>

int main() {
    double a, b;
    printf("input two numbers: ");
    scanf("%lf, %lf", &a, &b);
    double max = a, min = b;
    if (b > max) {
        max = b;
        min = a;
    }
    printf("bigger number: %lf , smaller number: %lf \n", max, min);
}
