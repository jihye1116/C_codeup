#include <stdio.h>

int main(){
    int a[101][101]={0,};
    int x1,y1,x2,y2;
    for(int sq=0; sq<4; sq++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                a[i][j]=1;
            }
        }
    }
    int one=0;
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            if(a[i][j] == 1) one++;
        }
    }
    printf("%d",one);

    return 0;
}
