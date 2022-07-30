#include <stdio.h>

int main(){
    int n,cnt=0,spin=1;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        if(spin%2==1){
            for(int j=0; j<n; j++){
                a[i][j]=++cnt;
            }
        }else{
            for(int j=n-1; j>=0; j--){
                a[i][j]=++cnt;
            }
        }
        spin++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
