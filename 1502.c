#include <stdio.h>

int main(){
    int n,cnt=0;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=++cnt;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
