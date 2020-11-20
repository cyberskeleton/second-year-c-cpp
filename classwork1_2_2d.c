#include <stdio.h>
#include <math.h>

double to_power(double x, double n) {
    int i, sum = 0;
    for (i=1; i <= n; i++) {
        //printf("%lf", pow(x, pow(i, 2)));
        sum = sum + pow(x, pow(i, 2));
    }
    return sum;
}

int main() {
    double x, n;
    printf("input x and n: ");
    scanf("%lf, %lf", &x, &n);
    double answer = to_power(x, n);
    printf("answer: %lf\n", answer);
}
