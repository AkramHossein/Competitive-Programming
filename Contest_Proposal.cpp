#include<iostream>
using namespace std ;

int main () {
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int n , count = 0 ;
        cin>>n ;
        int arr1[n] , arr2[n] ;
        for(int j =0 ;j<n ;j++){
            cin>>arr1[j] ;
        }
        for(int j =0 ;j<n ;j++){
            cin>>arr2[j] ;
        }
        if(n==1){
            arr1[0]>=arr2[0] ;
            cout<<"0\n" ;
        }
        else{
        for (int j = 0; j < n; j++) {
            if (arr1[j] != arr2[j]) {
                count++; 
            }
        }
        if(count==1){
            cout<<count<<"\n" ;
        }
        else{
            cout<<count/2<<"\n" ;
        }
        }
    }
    
    return 0 ;
}