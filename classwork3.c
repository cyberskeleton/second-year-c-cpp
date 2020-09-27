#include <stdio.h>
#include <math.h>

int function(int a, int b, int c){
    double determinant, ans;
    determinant = b*b - 4*a*c;
    printf("Determinant: %lf, ", determinant);
    if (determinant > 0){
        ans = 2;
    }
    else if (fabs(determinant)<0.0001) {
        ans = 1;
    }
    else{
        ans = 0;
    }
    return ans;
}

int main(){
    int a1, a2, a3, answer;
    printf("Enter a: ");
    scanf("%d", &a1);
    printf("Enter b: ");
    scanf("%d", &a2);
    printf("Enter c: ");
    scanf("%d", &a3);
    answer = function(a1, a2, a3);
    printf("this polynomial has %d solutions\n", answer);
}
