#include <stdio.h>

int main() {
    int n, factorial = 1;
    scanf("%d", &n);
    for(int i = n; i >= 2; i -= 2) {
        factorial = factorial * i;
    }
    printf("factorial: %d \n", factorial);
}
