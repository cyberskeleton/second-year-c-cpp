#include <stdio.h>
#include <math.h>

double find_maximum(double x, double y) {
    if (fabs(x) > fabs(y)) {
        return x;
    }
    return y;
}

double find_minimum(double x, double y) {
    if (fabs(x) < fabs(y)) {
        return x;
    }
    return y;
}

int main() {
    double a, b, c;
    printf("input three numbers: ");
    scanf("%lf, %lf, %lf", &a, &b, &c);
    double min = find_minimum(find_minimum(a, b), c);
    double max = find_maximum(find_maximum(a, b), c);
    printf("number with biggest absolute value: %lf\n", max);
    printf("number with smallest absolute value: %lf\n", min);
}
