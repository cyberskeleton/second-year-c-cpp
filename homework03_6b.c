#include <stdio.h>
#include <math.h>

double bent(double a) {
    double res = (sqrt(a*a+1)-1)/2+a;
    return res;
}

double derive(double (*f)(double), double a) {
    double delta = 1.0e-8;
    double x1 = a - delta;
    double x2 = a + delta;
    double y1 = f(x1);
    double y2 = f(x2);
    return (y2 - y1) / (x2 - x1);

}

int main() {
    double x;
    printf("input x: ");
    scanf("%lf", &x);
    double bent_x = bent(x);
    printf("bent(x) = %lf\n", bent_x);

    double derivative = derive(bent, 0.0);
    printf("%lf\n", derivative);
}
