#include <stdio.h>

double find_maximum(double a, double b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    double x, y, z;
    printf("input three numbers: ");
    scanf("%lf, %lf, %lf", &x, &y, &z);
    double max_a = find_maximum(find_maximum(x+y+z, x*y-x*z+y*z), x*y*z);
    double max_b = find_maximum(find_maximum(x*y, x*z), y*z);
    printf("answer to a) %lf\n", max_a);
    printf("answer to b) %lf\n", max_b);
}
