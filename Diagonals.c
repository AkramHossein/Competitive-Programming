#include <stdio.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        int n , k , a=1 , b ;
        scanf("%d%d",&n,&k) ;
        if(k==0) a = 0 ;
        else if(k<=n) a = 1 ;
        else{
            for(int q=1 ;q<n ;q++){
                for(int r=1 ;r<3 ;r++){
                    if(k>n) {
                        b = n-q ;
                        n=n+b ;
                        a++ ;
                    }
                    else break;
                }
            }
        }
        printf("a   %d\n",a) ;
    }
     
    return 0;
}