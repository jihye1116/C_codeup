#include <stdio.h>

int main(){
    int n,ssang,gap,max,cnt=0;
    scanf("%d %d", &n, &ssang);
    int a[n];
    int little[ssang];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i+=ssang){
        int max=a[i];
        for(int j=i; j<i+ssang; j++){
            if(j<n){
                if(a[j]>max)max=a[j];
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
