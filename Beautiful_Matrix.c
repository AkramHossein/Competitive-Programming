#include <stdio.h>

int main() {
    int t , i ;
    scanf("%d",&t);
    for(i=0 ;i<t ;i++){
        int n ;
        scanf("%d",n) ;
        char str[4*n] ;
        scanf("%s", str) ;
        int na=0 , nb=0 , nc=0 , nd=0 ;
        for(i=0;i<n*4;i++){
            if(str[i]=='A'){
                na+=1 ;
                if(na>n){
                    na=n ;
                }
            }
            if(str[i]=='B'){
                nb+=1 ;
                if(nb>n){
                    nb=n ;
                }
            }
            if(str[i]=='C'){
                na+=1 ;
                if(nc>n){
                    nc=n ;
                }
            }
            if(str[i]=='D'){
                na+=1 ;
                if(nd>n){
                    nd=n ;
                }
            }
        }
        printf{"%d",na+nb+nc+nd} ;
    }

    return 0;
}
