#include <stdio.h>

int main() {
    unsigned long int m;
    int j;
    printf("input m, j: ");
    scanf("%lu, %d", &m, &j);
    printf("sizeof(m) = %zu\n", sizeof(m));
    m &= ~(1 << j);
    printf("new number in decimal: %lu\n", m);
    printf("new number in hexadecimal: 0x%lx\n", m);
}
