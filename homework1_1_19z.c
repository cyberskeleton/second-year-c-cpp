#include <stdio.h>
#include <math.h>

double derive(double (*f)(double), double a) {
    double delta = 1.0e-8;
    double x1 = a - delta;
    double x2 = a + delta;
    double y1 = f(x1);
    double y2 = f(x2);
    return (y2 - y1) / (x2 - x1);
}

double sinc(double a) {
    double res;
    if (a == 0) {
        res = 1;
    }
    else {
        res = sin(a)/a;
    }
    return res;
}

int main() {
    double x;
    printf("input x: ");
    scanf("%lf", &x);
    double function = sinc(x);
    printf("sinc(%lf) = %lf\n", x, function);
    double deriv = derive(sinc, x);
    printf("derivative of sinc(x): %lf\n", deriv);
}
