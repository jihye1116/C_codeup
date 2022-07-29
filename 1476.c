#include <stdio.h>

int main(){

    int n,m,in=1;
    int a[105][105];
    scanf("%d %d",&n ,&m);
    int curve=n+m;

    for(int x=0; x<curve ;x++){
            for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					if(i+j == x)a[j][i]=in++;
				}
			}
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

