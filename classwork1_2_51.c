#include <stdio.h>
#include <math.h>

double tg(double x) {
    return  x - tan(x);
}

int bisection(double a, double b, double eps) {
    double c;
    if (tg(a)*tg(b) >= 0) {
        c = a;
    }
    while ((b-a) >= eps) {
        c = (a + b) / 2;
        if (tg(c) == 0) {
            break;
        }
        if (tg(c) * tg(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    printf("x = %lf\n", c);
}

int main() {
    double a = 0.001, b = 1.5;
    double eps;
    printf("input eps: ");
    scanf("%lf", &eps);
    bisection(a, b, eps);
}
