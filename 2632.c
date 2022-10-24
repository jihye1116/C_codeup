#include <stdio.h>

int n;
int memo[100] = {1,2,};

int f(int k){
    if(memo[k] != 0) return memo[k];
    return memo[k] = (f(k-1) + f(k-2));
}

int main(){

    scanf("%d", &n);
    printf("%d", f(n-1));

    return 0;
}

