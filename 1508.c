#include <stdio.h>
int main(){

    int a[101][101]={0,};
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            a[i][j]=a[i][j-1]-a[i-1][j-1];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
