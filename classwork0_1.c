#include <stdio.h>

int main(){
    int num;
    int hundreds, tens, ones;
    printf("Enter the number: ");
    scanf("%d", &num);
    hundreds = (num/100) % 10;
    tens = (num/10) % 10;
    ones = num % 10;
    printf("hundreds: %d\n tens: %d\n ones: %d\n", hundreds, tens, ones);
    int sum = hundreds + tens + ones;
    printf("sum of digits: %d\n", sum);
    int reversed_num = ones*100 + tens*10 + hundreds;
    printf("reversed number: %d\n", reversed_num);
    return 0;
}
