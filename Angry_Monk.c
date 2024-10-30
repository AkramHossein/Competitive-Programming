#include <stdio.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        int n , k , j;
        scanf("%d%d",&n,&k) ;
        int ar[k] ;
        for (int j = 0; j < k; j++) {
            scanf("%d",&ar[j]);  
        }
        int a=ar[0] ;
        for (int j = 0; j < k; j++) {
            if(a<ar[j]) a=ar[j]  ;
        }
        int b=0 ;
        for (int j = 0; j < k; j++) {
            if(ar[j]!=1)b+=(ar[j]-1) ;
        }
        b=b-(a-1) ;
        int c = 0 ;
        for (int j = 0; j < k; j++) {
            c+=ar[j];
        }
        c=c-a ;
        printf("%d\n",b+c) ;
    }
    
     
    return 0;
}