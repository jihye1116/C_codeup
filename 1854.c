#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*정수로 받아서 각 자리 수*/
/*
long long int n;
int f(long long int n){
    if(n==0) return 0;
    return n%10+f(n/10);
}

int main() {
    scanf("%lld", &n);
    printf("%d", f(n));
    return 0;
}
*/
/*문자열로 받아서 각 자리 수*/

/*
char str[30];
int f(int k){
    if(k<0) return 0;
    return f(k-1)+(str[k]-'0');
}

int main() {

    int n;
    scanf("%s", &str);
    n=strlen(str);
    printf("%d\n", f(n-1));
    return 0;
}
*/
