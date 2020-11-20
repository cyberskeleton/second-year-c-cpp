#include <stdio.h>

double dot_product(double v1[], double v2[], int n) {
    double product = 0;
    int i;
    for (i = 0; i < n; i++) {
        product += v1[i] * v2[i];
    }
    return product;
}

double vector_sum(double v1[], double v2[], double v3[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
    }
    return 0;
}

double input(double v[], int n) {
    int i;
    for (i = 0; i < n; i ++) {
        float num;
        printf("input element %d: ", i);
        scanf("%f", &num);
        v[i] = num;
    }
    return 0;
}

double print(double v[], int n) {
    int i;
    printf("{");
    for (i = 0; i < n; i++) {
        printf("%f ", v[i]);
    }
    printf("}\n");
    return 0;
}

int main() {
    int N;
    printf("input array size: ");
    scanf("%d", &N);
    double vector1[N], vector2[N], vector3[N];
    input(vector1, N);
    input(vector2, N);
    printf("vector1 · vector2 = %lf\n", dot_product(vector1, vector2, N));
    vector_sum(vector1, vector2, vector3, N);
    printf("vector1 + vector2 =  " );
    print(vector3, N);
}
