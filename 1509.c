#include <stdio.h>

int main(){

    int n,an=1;
    scanf("#include <stdio.h>

int main(){

    int a[11][10]={ 0,};
    int block,pit;

    for(int i=0; i<11; i++){
        for(int j=0; j<10; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<10; i++){
        block=0;
        pit=0;
        for(int j=10; j>=0; j--){
                if(j!=10 && a[j][i]>=1 && pit==0) block+=1;
                if(a[j][i]<0 && block==0) pit+=1;
        }
        if(a[10][i]==1){
            printf("%d ",i+1);
            if(block>0) printf("crash");
            else if(pit>0) printf("fall");
            else printf("safe");
            printf("\n");
        }
    }

    return 0;
}
