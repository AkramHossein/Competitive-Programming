#include<bits/stdc++.h>

using namespace std ;

int main () {
    int t ;
    cin>>t ;
    while (t--) {
        int n ;
        cin >> n ;
        int arr[n] ;
        int od = 0 , ev = 0 ;
        for(int i =0 ; i<n ; i++){
            cin >> arr[i] ;
            if(i%2==0&&arr[i]%2!=0){
                ev ++  ;
            }
            else if(i%2!=0&&arr[i]%2==0){
                od ++ ;
            }
        }
        if(ev==od){
            cout << ev <<"\n" ;
        }
        else{
            cout <<"-1\n" ;
        }
    }
    
    return 0 ;
}