#include <stdio.h>

typedef struct Rational {
    int nominator;
    unsigned int denominator;
}Rational;

int input( Rational* x) {
    printf("input nominator, denominator: ");
    scanf("%d, %u", &x->nominator, &x->denominator);
    return 0;
}

int add_r (Rational x, Rational y) {

}
int main() {
    Rational r1, r2;
    input(&r1);
    input(&r2);
    add_r(r1, r2);
}
