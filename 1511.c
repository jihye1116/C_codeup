#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int a[n][n];
    int an=1,sum=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=an++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                sum+=a[i][j];
                a[i][j]=0;
            }
        }
    }
    printf("%d",sum);

    return 0;
}
