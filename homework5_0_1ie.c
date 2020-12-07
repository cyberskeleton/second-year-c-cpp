#include <stdio.h>

typedef struct Circle {
    float radius;
    int x;
    int y;
}Circle;

int input(Circle* c) {
    printf("input radius and x, y: ");
    scanf("%f, %d, %d", &c->radius, &c->x, &c->y);
}

void print(Circle c) {
    printf("radius: %f, centre: (%d, %d)", c.radius, c.x, c.y);
}

int main() {
    Circle c;
    input(&c);
    print(c);
}
