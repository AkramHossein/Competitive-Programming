#include <stdio.h>
#include <stdlib.h>
int main() {
    int a , n , i ;
    scanf("%d",&n) ;
    int ar[n] ;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]) ;
    }
    for(i=0;i<n;i++){
        ar[i]=abs(ar[i]) ;
    }
    int min = ar[0];
    for (i = 1; i < n; i++) {
        if (ar[i] < min) {
            min = ar[i];
        }
    }
    printf("%d\n",min) ;
    return 0;
}