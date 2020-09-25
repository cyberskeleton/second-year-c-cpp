#include <stdio.h>

int function(int a, int b, int c){
    int determinant, ans;
    determinant = b*b - 4*a*c;
    if (determinant > 0){
        ans = 2;
    }
    if (determinant == 0){
        ans = 1;
    }
    else{
        ans = 0;
    }
    return ans;
}

int main(){
    int a1, a2, a3, answer;
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    answer = function(a1, a2, a3);
    printf("this polynomial has %d solutions", answer);
}
