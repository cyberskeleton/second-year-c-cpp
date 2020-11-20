#include <stdio.h>

int sum(int n) {
    float a3, add;
    float a2 = 1, a1 = 1, k = 3;
    float sum = 12, power = 9;
    while (k <= n) {
        a3 = a2/k + a1;
        a1 = a2;
        a2 = a3;
        k += 1;
        power *= 3;
        add = power/a3;
        sum += add;
    }
    return sum;
}

int main() {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    printf("answer: %d \n", sum(n));
}
