#include <stdio.h>

int main() {
    int i=2;
    float n;
    printf("n: ");
    scanf("%f", &n);
    while (i <= n) {
        i *= 2;
    }
    printf("%d\n", i);
}
