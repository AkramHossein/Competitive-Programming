#include<iostream>
using namespace std ;

int main () {
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int ana , kit , both ;
        cin >>ana >>kit >>both ; 
        
        if(ana>=(kit+both)){
            cout<<"First\n" ;
        }
        else if(kit>=(ana+both)){
            cout<<"Second\n" ;
        }
        else if (both%2==0){
            if(ana>kit){
                cout<<"First\n" ;
            }
            else{
                cout<<"Second\n" ;
            }
        }
        else if (both%2!=0){
            if(ana>=kit){
                cout<<"First\n" ;
            }
            else{
                cout<<"Second\n" ;
            }
        }
    }
    
    return 0 ;
}