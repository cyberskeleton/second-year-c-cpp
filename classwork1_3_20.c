#include <stdio.h>

int main() {
    int n = 1; // 00000000 00000000 00000000 00000001
    printf("sizeof(n) = %zu\n", sizeof(n));
    printf("sizeof(char) = %zu\n", sizeof((char) n));
    if ((char) n == 1) { //(char) n takes only the 00000001 part on my pc
        printf("little endian\n");
    }
    else { printf("big endian\n");}
}
