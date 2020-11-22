#include <stdio.h>

int main() {
    int n2, prime_not_found, i, j;
    do {
        printf("input n*2: ");
        scanf("%d", &n2);
    } while (n2 % 2 != 0);
    int n = n2/2;
    printf("prime numbers in range from 2 to %d/2 = %d\n", n2, n);
    for (i = 3; i <= n; i++){
        prime_not_found = 0;
        for (j = 2; j <= i/2; j++){
            if (i % j == 0) {
                prime_not_found++;
                break;
            }
        }
        if (prime_not_found == 0 && i != 1) {
            printf(" %d \n", i);
        }
    }
    return 0;
}
