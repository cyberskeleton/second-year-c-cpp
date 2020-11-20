#include <stdio.h>
#include <math.h>

int main() {
    double r, R;
    printf("input inner and outer radii: ");
    scanf("%lf, %lf", &r, &R);
    double volume = 2*M_PI*M_PI*R*r*r;
    printf("volume of torus: %lf\n", volume);
}
