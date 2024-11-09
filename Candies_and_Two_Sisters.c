#include <stdio.h>

int main() {
    int x , i , a ;
    scanf("%d",&x) ;
    for(i=0 ;i<x ; i++){
        scanf("%d",&a) ;
        if(a&1){
            printf("%d\n",a/2) ;
        }
        else{
            printf("%d\n",a/2-1) ;
        }
    }
//    printf("I love you") ;
    return 0;
}