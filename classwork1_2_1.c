#include <stdio.h>
#include <math.h>

double count(double x, int n) {
    double res = sin(x);
    int i = 0;
    while (i <= n) {
        res = sin(res);
        i ++;
    }
    return res;
}

int main() {
    double x, n;
    printf("input x and n: ");
    scanf("%lf, %lf", &x, &n);
    double answer = count(x, n);
    printf("answer: %lf\n", answer);
}
