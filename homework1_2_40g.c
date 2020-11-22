#include <stdio.h>
#include <math.h>

double sum(int n) {
    float a1 = 2, b0 = 5, b1 = 5;
    float a2;
    double sum = 0.4;
    int k = 2;
    while (k <= n) {
        a2 = b0 + ((b0*b0 - a1)/2);
        //printf("out: %d, %f, %f", k, a2, pow((a2/(b0*b0 - a1)), k));
        sum += pow((a2/(b0*b0 - a1)), k);
        a1 = a2;
        b0 = b1;
        k++;
    }
    return sum;
}

int main() {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    printf("answer: %lf \n", sum(n));
}
