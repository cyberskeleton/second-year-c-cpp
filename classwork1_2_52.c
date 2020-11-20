#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float polynomial(float a) {
    return pow(a, 3) + 4*pow(a, 2) + a - 6;
}

float find_roots(int start, int finish, float eps) {
    float u0 = start;
    float u1 = u0 - (polynomial(u0)/(polynomial(finish) - polynomial(u0)))*(finish - u0);
    while (fabs(u1 - u0) >= eps) {
        u0 = u1;
        u1 = u0 - (polynomial(u0)/(polynomial(finish) - polynomial(u0)))*(finish - u0);
    }
    return fabs(u1 - u0);
}

int main() {
    printf("input eps: ");
    float eps;
    scanf("%f", &eps);
    float  r = find_roots(0, 2, eps);
    printf("%f\n", r);
    printf("%f\n", polynomial(r));
}
