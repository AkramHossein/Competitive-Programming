#include<iostream>
#include<cstring>

using namespace std ;

int main () {

    int x ;
    int an = 0 , da = 0 ;
    string ak ;
    cin >> x >> ak ;
    for(int i=0 ; i<=x ;i++){
        if(ak[i]=='A'){
            an++ ;
        }
        else if(ak[i]=='D') {
            da++ ;
        }
    }
    if(an>da){
        cout<<"Anton\n" ;
    }
    else if(da>an){
        cout<<"Danik\n" ;
    }
    else{
        cout<<"Friendship\n" ;
    }
    
    return 0 ;
}