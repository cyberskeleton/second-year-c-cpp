#include <stdio.h>

int main() {
    float v0 = 1, v1 = 0.3, j = 2;
    int i;
    float v2;
    printf("input i: ");
    scanf("%d", &i);
    while (j <= i) {
        v2 = (j + 2) * v0;
        v0 = v1;
        v1 = v2;
        j += 1;
    }
    printf("v%d = %f\n", i, v2);
}
