#include <stdio.h>

int main() {
    float answer, m, k;
    printf("input m: ");
    scanf("%f", &m);
    k = 0;
    answer = 1;
    while (answer <= m) {
        k = k + 1;
        answer *= 4;
    }
    printf("k = %g \n", k - 1);
}
