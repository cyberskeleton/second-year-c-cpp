#include <stdio.h>

int main() {
    unsigned long n;
    printf("input n: ");
    scanf("%lu", &n);
    printf("sizeof(n) = %zu\n", sizeof(n));
    printf("2^%lu = %d\n", n, 1 << n);
}
