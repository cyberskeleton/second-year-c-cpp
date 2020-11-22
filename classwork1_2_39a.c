#include <stdio.h>

int sum(int n) {
    int a3, add;
    int a2 = 1, a1 = 0, k = 3, power = 4;
    int sum = 4;
    while (k <= n) {
        a3 = a2 + k*a1;
        //printf("%d\n", a3);
        a1 = a2;
        //printf("%d\n", a1);
        a2 = a3;
        //printf("%d\n", a2);
        k += 1;
        power *= 2;
        add = a3 * power;
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
