#include <stdio.h>
#include <math.h>

int main() {
    double x, eps;
    double a, sum;
    int k;
    printf("input x, eps: ");
    do{
        scanf("%lf, %lf", &x, &eps);
    } while(eps <= 0);
    a = 1;
    k = 0;
    sum = 1;
    while (fabs(a) > eps) {
        k++;
        a *= a/k;
        sum += a;
    }
    printf("result: %lf \n", sum);
}
