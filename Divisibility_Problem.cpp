#include<bits/stdc++.h>
using namespace std ;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int a , b , x  ;
        cin >> a >> b ;
        x = a%b ;
        if(x==0){
            cout << "0\n" ;
        }
        else{
            int k ;
            k = b-x ;
            cout << k << "\n" ;
        }
        
    }
    
    return 0 ;
}