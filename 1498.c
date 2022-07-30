#include <stdio.h>

int main(){
    int n,ssang,gap,min,cnt=0;
    scanf("%d %d", &n, &ssang);
    int a[n];
    int little[ssang];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i+=ssang){
        int min=a[i];
        for(int j=i; j<i+ssang; j++){
            if(j<n){
                if(a[j]<min)min=a[j];
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
