#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("input numbers less than 2^10: ");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    long product = num1*num2*num3;
    printf("product a) %ld\n", product);
    long num1b, num2b, num3b;
    printf("input numbers less than 2^21: ");
    scanf("%ld, %ld, %ld", &num1b, &num2b, &num3b);
    long long productb = num1b*num2b*num3b;
    printf("product b) %lld\n", productb);
}
