#include <stdio.h>

double max(double xf, double yf, double zf) {
    double a = xf * yf;
    double b = yf * zf;
    double c = zf * xf;
    double maximum = a;
    if (b > maximum) {
        maximum = b;
    }
    if (c > maximum) {
        maximum = c;
    }
    return maximum;
}
int main(){
    double x, y, z;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    double ans = max(x, y, z);
    printf("max: %lf", ans);
}
