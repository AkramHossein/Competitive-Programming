#include<bits/stdc++.h>

using namespace std ;

void look (int x){
    switch (x)
        {
        case 'c' :
            cout <<"YES\n" ;
            break;
        case 'o':
            cout <<"YES\n" ;
            break;
        case 'd':
            cout <<"YES\n" ;
            break;
        case 'e':
            cout <<"YES\n" ;
            break;
        case 'f':
            cout <<"YES\n" ;
            break;
        case 'r':
            cout <<"YES\n" ;
            break;
        case 's':
            cout <<"YES\n" ;
            break;
        default:
            cout <<"NO\n" ;
            break;
        }
}

int main () {
    int t ;
    cin>>t ;
    while (t--) {
        char x ;
        cin >> x ;
        look(x) ;
    }
    
    return 0 ;
}