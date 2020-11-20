#include <stdio.h>
#include <math.h>

double max(double a, float num){
    int i;
    float z, biggest_num = fabs(num);
    for(i = 2; i <= a; i++) {
        printf("input element number %d: ", i);
        scanf("%f", &z);
        if (fabs(z) > biggest_num)
            biggest_num = fabs(z);
    }
    return biggest_num;
}

int main(){
    int n;
    float num1;
    printf("input the number of elements: ");
    scanf("%d", &n);
    printf("input the first number: ");
    scanf("%f", &num1);
    printf("the largest of %d numbers is %f \n", n, max(n, num1));
}
