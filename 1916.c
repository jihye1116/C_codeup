#include <stdio.h>

int n;
int memo[201] = { 0,1,1,0};

long long int f(int k){
    if(memo[k]!=0)return memo[k];
    return memo[k] = (f(k-1) + f(k-2))%10009;
}

int main(){

  scanf("%d", &n);
  printf("%lld\n", f(n));

  return 0;
}

