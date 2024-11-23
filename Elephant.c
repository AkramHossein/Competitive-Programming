#include <stdio.h>

int main() {
    int n , count=0 ;
    scanf("%d",&n) ;
    count=n/5 ;
    n=n-(n/5)*5 ;
    count+=n/4 ;
    n=n-(n/4)*4 ;
    count+=n/3 ;
    n=n-(n/3)*3 ;
    count+=n/2 ;
    n=n-(n/2)*2 ;
    count+=n ; 
    printf("%d",count) ;
    return 0;
}