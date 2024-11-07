#include<bits/stdc++.h>

using namespace std ;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , a ;
    cin >> n >> a ;
    int x , y , z ;
    x = n%10 ;
    if(x==0){
        cout << "1\n" ;
    }
    else{
        for(int i=1 ; i<=9 ; i++){
            if((i*x)%10==a||(i*x)%10==0){
                y = i ;
                break;
            }
        }
        cout << y << "\n" ;
    }
    
    return 0 ;
}