#include <stdio.h>
/*하향식*/
int n;

void f(int k){
    if(k<=0) return;
    f(k-1);
    printf("*");
}

int main() {

    scanf("%d", &n);
    f(n);

    return 0;
}

/*상향식*/
/*
#include <stdio.h>

int n;

void f(int k){
    if(k == n) return;
    f(k+1);
    printf("*");
}

int main() {

    scanf("%d", &n);
    f(0);

    return 0;
}

*/
