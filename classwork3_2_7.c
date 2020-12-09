#include <stdlib.h>
#include <stdio.h>

int convert_to_system(unsigned n, unsigned i, unsigned b, char* word) {
    unsigned m = n;
    char digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    while(m) {
        int d = n % b;
        word[i] = digit[i];
        m /= d;
        i++;
    }
    return m;
}

int main() {
    unsigned n, i, b;
    char word[100];
    printf("input n, b: ");
    scanf("%u, %u", &n, &b);
    for (i=0; i<n; i++) {
        printf("%c", convert_to_system(n, i, b, word));
    }
}