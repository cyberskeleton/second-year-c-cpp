#include <stdio.h>
#include <math.h>

double to_power(double x, double n) {
    int i = 0, sum = 0;
    while (i < n) {
        sum = sum + pow(x, i);
        i++;
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
