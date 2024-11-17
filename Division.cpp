#include<bits/stdc++.h>

using namespace std ;

int main () {
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int rat ;
        cin >> rat ;
        if(1900<=rat){
            cout <<"Division 1\n" ;
        }
        else if (1600<=rat && rat<=1899){
            cout <<"Division 2\n" ;
        }
        else if(1400<=rat&&rat<=1599){
            cout <<"Division 3\n" ;
        }
        else{
            cout <<"Division 4\n" ;
        }
        
    }
    
    return 0 ;
}