#include <stdio.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        char a[4] , b[4]  ;
        scanf("%s",a);
        scanf("%s",b);
        char x=a[0] ;
        a[0]=b[0] ;
        b[0]=x ;
        printf("%s %s\n", a, b);
    }
     
    return 0;
}