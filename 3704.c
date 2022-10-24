#include <stdio.h>

int n;
int memo[1000001] = { 0,1,2,4 };

int f(int k){
    if(memo[k] != 0) return memo[k];
    return memo[k] = (f(k-1) + f(k-2) + f(k-3))%1000;
}

int main(){

    scanf("%d", &n);
    printf("%d", f(n));

    return 0;
}

