#include <stdio.h>

int main() {
    int a , b , i ;
    scanf("%d%d",&a,&b) ;
    for (i=1 ;i<10 ;i++){
        if(a*3*i>b*2*i){
            printf("%d\n",i) ;
            break;
        }
        a=a*3*i ,b=b*2*i ;
    }
    
    return 0;
}