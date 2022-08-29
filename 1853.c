#include <stdio.h>
#include <stdlib.h>

int n;
/*하향식*/
int f(int k){
    if(k<=1) return 1;
    return f(k-1) + k ;
}
/*상향식*/
/*
int f(int k){
    if(k==n) return n;
    return f(k+1) + k ;
}
*/
int main() {

    scanf("%d", &n);
    printf("!%d \n", f(n));

    return 0;
}
