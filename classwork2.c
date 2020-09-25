#include <stdio.h>
// this is the wrong solution

double function(int a){
    double a_div = a % 2;
    if (a_div != 0){
        return 0;
    }
    else{
        return a;
    }
}

int main(){
    int x;
    scanf("%d", &x);
    double ans = function(x);
    printf("ans: %lf", ans);
}
