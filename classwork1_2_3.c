#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        int factorial = 1;
        factorial = factorial * i;
        printf("%d * ", factorial);
    }
}
