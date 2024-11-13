#include<iostream>
using namespace std ;

int main () {
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int n , a , k ;
        cin >> n >> a ;
        int x ,  y , z ;
        x = n - 1  ;
        if(a>=x){
            z = 1 ;
        }
        else {
            z = n ;
        }
        
        cout<< z <<"\n" ;
    }
    
    return 0 ;
}