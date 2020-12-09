#include <stdio.h>

int main() {
    signed int n; // 1001
    int k; //1
    printf("input n, k: ");
    scanf("%u, %d", &n, &k);
    printf("sizeof(n) = %zu\n", sizeof(n));
    n &= ~(1 << 1);
    printf("1 bit cleared: %u\n", n); //1001
    n |= (1 << 1)|(1<<k);
    printf("result: %u\n", n); //1011
}
