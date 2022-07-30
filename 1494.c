#include <stdio.h>

int main(){
    int d[101]={0, };
    int n,spin;
    int s,e,u,sum=0;
    scanf("%d %d",&n,&spin);
    for(int i=1; i<=spin; i++){
        scanf("%d %d %d",&s,&e,&u);
        d[s]=d[s]+u;
        d[e+1]=d[e+1]-u;
    }
    for(int i=1; i<=n; i++){
        printf("%d ",d[i]);
    }
    printf("\n");

    for(int i=1; i<=n; i++){
        sum+=d[i];
        printf("%d ",sum);

    }
    return 0;
}
