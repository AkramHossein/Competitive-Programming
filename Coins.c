#include <stdio.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        int n , k ;
        scanf("%d%d",&n,&k) ;
        int b=n-k ;
        int c=n-2 ;
        if(n==k||n==2){
            printf("Yes\n") ;
        }
        else if(n%2==0){
            printf("Yes\n") ;
        }
        else if(n%2==0){
            printf("Yes\n") ;
        }
        else if(b%2==0&&b>=2){
            printf("Yes\n") ;
        }
        else if (c%k==0&&c>=k) {
            printf("Yes\n") ;
        }
        else {
            printf("No\n") ;
        }
     }
     
    return 0;
}