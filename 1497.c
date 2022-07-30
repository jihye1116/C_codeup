#include <stdio.h>

int main(){
    int couple, a, b;
    scanf("%d", &couple);
    for(int i=0; i<couple/2; i++){
        scanf("%d %d", &a, &b);
        printf("%d ", a>b ? a:b);
    }
    return 0;
}
