#include <stdio.h>

int main() {
    long long x , esum , osum , a , b ;
    scanf("%lld",&x) ;
    // for (int i=1 ;i<=x ;i++){
    //     if(i&1){
    //         count-=i ;
    //         //printf("a%d\n",count) ;
    //     }
    //     else{
    //         count+=i ;
    //         //printf("b%d\n",count) ;
    //     }
    // }
    a = x / 2;
    esum = a * (a + 1);
    b = (x + 1) / 2;
    osum = b * b;
    printf("%lld\n",esum-osum) ;
    
    return 0;
}