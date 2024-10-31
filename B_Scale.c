#include <stdio.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        int n , k , j , w, x;
        scanf("%d%d",&n,&k) ;
        char ar[n][n] ;
        for(j=0 ;j<n ;j++){
            for(w=0 ;w<n ;w++){
                scanf(" %c",&ar[j][w]) ;
            }
        }
        for(j=0 ;j<n ;j+=k){
            for(w=0 ;w<n ;w+=k){
                printf("%c", ar[j][w]);
            }
            printf("\n") ;
        }
    }
     
    return 0;
}
