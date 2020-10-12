#include <stdio.h>

int main() {
    int a0 = 0, a1 = 1, j = 2;
    int i, a2;
    printf("input i: ");
    scanf("%d", &i);
    while (j <= i) {
        a2 = a0 + a1;
        a0 = a1;
        a1 = a2;
        j += 1;
    }
    printf("F%d = %d\n", i, a2);
}
