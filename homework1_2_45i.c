#include <stdio.h>
#include <math.h>

double sum(float eps, float x) {
    float a1 = 1, a2;
    double sum = 1;
    int k = 1;
    while (fabs(a1) > eps) {
        k++;
        a2 = a1*(-x);
        sum += k*a2;
        a1 = a2;
    }
    return sum;
}

int main() {
    double x, eps;
    do {
        printf("input eps, x: ");
        scanf("%lf, %lf", &eps, &x);
    } while (fabs(x) >= 1 || eps <= 0);
    printf("answer: %lf \n", sum(eps, x));
}
