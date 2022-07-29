<<<<<<< HEAD
#include <stdio.h>

int main()
{
	printf("Hello World!");
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
        for(int j=m-1; j>=0; j--) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
>>>>>>> ab18f486ec415e5fbe5968c7226f1761d5f30557
