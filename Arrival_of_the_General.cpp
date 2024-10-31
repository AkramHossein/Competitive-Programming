#include<iostream>

using namespace std ;

int main () {
    int n , max = 0 , min = 0 ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ;i++){
        cin >> arr[i] ;
    }
    int big=arr[0] , smal=arr[0] ;
    for(int i=0 ; i<n ;i++){
        if(big<arr[i]){
            big=arr[i] ;
            max = i+1 ;
        }
        if(smal>=arr[i]){
            smal=arr[i] ;
            min = i+1 ;
        }
    }
    int a , b ;
    if(max>1){
        a = max-1 ;
    }
    else{
        a = 0 ;
    }
    if(min<n){
        b = n-min ;
    }
    else{
        b = 0 ;
    }
    if(min<max){
        cout << a+b-1 << "\n" ;
    }
    else{
        cout << a+b << "\n" ;
    }

    return 0 ;
}