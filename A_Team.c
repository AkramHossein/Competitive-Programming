#include <stdio.h>

int main() {
    int n , x, j , k ,count=0;
    scanf("%d",&n) ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&x,&j,&k) ;
        if((x+j+k)>1){
            count++ ;
        }
    }
    printf("%d\n",count) ; 
    return 0;
}
