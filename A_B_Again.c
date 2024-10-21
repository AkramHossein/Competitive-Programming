#include <stdio.h>

int main() {
    int x ,n ,a=0 ,b=0 ;
    scanf("%d",&x) ;
    int akash[x] ;
    for(int i=0 ;i<x ;i++){
        scanf("%d",&n) ;
        a = n/10 ;
        b =n-(n/10)*10 ;
        akash[i]=a+b ;
        a=0 , b=0 ;
    }
    for(int i=0 ;i<x ;i++){
        printf("%d\n",akash[i]) ;
    }
    
    return 0;
}
