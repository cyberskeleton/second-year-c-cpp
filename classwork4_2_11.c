#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned num;
    float upper_left_x;
    float upper_left_y;
    float bottom_right_x;
    float bottom_right_y;
} Rectangle;

int input(Rectangle* x) {
    printf("input n: ");
    scanf("%u", &n);
    printf("input upper left coordinates: ");
    scanf("%f, %f", &(x->upper_left_x), &(x->upper_left_y));

}

int add_rectangle(char* filename) {
    unsigned n;
    printf("input n: ");
    scanf("%u", &n);
    for (unsigned i = 0; i< n; ++i) {
    }
}