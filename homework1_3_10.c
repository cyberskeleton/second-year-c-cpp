#include <stdio.h>
#include <stdbool.h>

int no_cycle(int n) {
    int new_n = n--;
    if(n & new_n) {
        printf("no\n");
    } else { printf("yes\n"); }
}

bool yes_cycle(int n) {
    int new_n = n--;
    while (1 < n && (! (n & new_n))) {
            n >>= 1;
        }
    return n == 1;
}

int main () {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    no_cycle(n);
    printf("%s", yes_cycle(n)?"true\n":"false\n");
}
