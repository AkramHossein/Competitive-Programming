#include<iostream>
using namespace std ;



int main () {
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int n , sum = 0 ;
        cin>>n;
        int arr[n] ;
        for(int j =0 ;j<n ;j++){
            cin>>arr[j] ;
        }
        bool a = true ;
        for (int j = 0; j < n; j++) {
            if (arr[j] <= 4) {
                a = false; 
                break; 
            }
        }
        for(int j =0 ;j<n ;j++){
            sum+=arr[j] ;
        }
        if(a){
            int g , h , k ;
            g=(sum/3)+1 ;
            h = g*3   ;  
            k = h - sum ;
            cout<<k<<"\n" ;
        }
        else{
            int k = sum - (sum/3)*3 ;
            if(k==0){
                cout<<"0\n" ;
            }
            else{
                cout<<"1\n" ;
            }
        }
    }
    
    return 0 ;
}