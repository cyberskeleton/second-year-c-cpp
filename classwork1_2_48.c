#include <stdio.h>

double prime_divisors(int n) {
    for (int i = 3; i <= n; i = i + 2) {
        if (n % 2 == 0) {
            printf("%d \n", 2);
            n = n/2;
        }
        if (n % i == 0) {
            printf("%d \n", i);
            n = n/i;
        }
    }
    if (n > 2){
        printf("%d \n", n);
    }
}
int main() {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    prime_divisors(n);
}
