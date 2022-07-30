#include <stdio.h>

int main(){
    int n,cnt=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", ++cnt);
        }
        printf("\n");
    }
    return 0;
}
