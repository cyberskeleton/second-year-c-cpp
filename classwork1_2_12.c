#include <stdio.h>

int main() {
    float eps = 1;
    while (1 + (eps/2) != 1) {
        eps /= 2;
    }
    printf("machine zero: %f\n", eps);
}
