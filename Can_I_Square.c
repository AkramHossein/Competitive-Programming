#include <stdio.h>
#include <math.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        int n , sum = 0 ;
        scanf("%d",&n) ;
        int arr[n] ;
        for(int j =0 ;j<n ;j++){
            scanf("%d",&arr[j]) ;
        }
        for(int j =0 ;j<n ;j++){
            sum +=arr[j] ;
        }
        int w = sqrt(sum) ;
        int v = w*w ;
        if(v==sum){
            printf("Yes\n") ;
        }
        else {
            printf("No\n") ;
        }
    }
     
    return 0;
}