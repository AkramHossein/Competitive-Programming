#include <stdio.h>

int main() {
    int x , i ,a ,b ,c ;
    scanf("%d",&x) ;
    for (i=0 ;i<x ;i++){
        scanf("%d%d%d",&a,&b,&c) ;
        if(((a+b)==c)||((a+c)==b)||((b+c)==a)){
            printf("YES\n") ;
        }
        else{
            printf("NO\n") ;
        }
    }
    
    return 0;
}