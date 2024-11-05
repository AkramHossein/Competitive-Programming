#include<iostream>
#include<string>

using namespace std ;

int main () {
    string ak ;
    cin >> ak ;
    int x = ak.length() ;
    int a = 0 , b = 0 ;

    for(int i =0 ;i<x ; i++){
        a = 0 ;
        for(int j=i+1 ;j<x ;j++){
            if(ak[i]==ak[j]){
                a = 1 ;
                break;
            }
        }
        if(a==0){
            b++ ;
        }
    }
    if(b%2==0){
        cout <<"CHAT WITH HER!\n" ;
    }
    else{
        cout << "IGNORE HIM!\n" ;
    }
    return 0 ;
}