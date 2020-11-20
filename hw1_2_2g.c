#include <stdio.h>
#include <math.h>

double to_power(double x, double y, double n) {
    int i, sum = 0;
    for (i=0; i <= n; i++) {
        sum = sum + (pow(y, i))*pow(x, pow(2, i));
    }
    return sum;
}

int main() {
    double x, y, n;
    printf("input x, y and n: ");
    scanf("%lf, %lf %lf", &x, &y, &n);
    double answer = to_power(x, y, n);
    printf("answer: %lf\n", answer);
}
