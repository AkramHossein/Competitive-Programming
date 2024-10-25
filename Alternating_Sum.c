#include <stdio.h>

int main() {
    int t , n , i , j , a , sum=0 ;
    scanf("%d",&t) ;
    for(i=0 ;i<t ;i++){
        scanf("%d",&n) ;
        for(j=0 ;j<n ;j++ ) {
            scanf("%d",&a) ;
            if(j&1){
                sum-=a ;
            }
            else{
                sum+=a ;
            }
        }
        printf("%d\n",sum) ;
        sum = 0 ;
    }
    return 0;
}