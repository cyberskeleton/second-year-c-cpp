#include <stdio.h>

int main() {
    int n, factorial = 1, factorial2 = 1;
    scanf("%d", &n);
    for (int i=1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("factorial1: %d \n", factorial);
    for(int i = n; i >= 1; i -= 1) {
        factorial2 = factorial2 * i;
    }
    printf("factorial2: %d \n", factorial2);
}
