#include <stdio.h>

int main(){
    int couple, a, b;
    scanf("%d", &couple);
    for(int i=0; i<couple/2; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d ", a<b ? a:b);
    }

    return 0;
}
