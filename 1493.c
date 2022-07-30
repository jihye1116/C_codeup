#include <stdio.h>

int main(){
    int arr[101][101];
    int arr_dop[101][101];
    int n,m,sum=0;
    scanf("%d %d",&n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
            for(int k=0; k<=i; k++){
                for(int l=0; l<=j; l++){
                    sum+=arr[k][l];
                }
            }
            arr_dop[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr_dop[i][j]);
        }
        printf("\n");
    }
    return 0;
}
