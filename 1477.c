<<<<<<< HEAD
#include <stdio.h>

int main(){

    int n,m,in=1;
    int a[105][105];
    scanf("%d %d",&n ,&m);
    int curve=n+m;

    for(int x=0; x<curve ;x++){
            for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(i+j == x)a[i][j]=in++;
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
=======
#include <stdio.h>

int main(){

    int n,m,in=1;
    int a[105][105];
    scanf("%d %d",&n ,&m);
    int curve=n+m;

    for(int x=0; x<curve ;x++){
            for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(i+j == x)a[i][j]=in++;
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
>>>>>>> 88efdd8555a8a1f6e6129d71daf1a9bbd0a60aa1
