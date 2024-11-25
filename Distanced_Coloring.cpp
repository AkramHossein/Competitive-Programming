#include<bits/stdc++.h>
#define LL long long int 

using namespace std ;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	int T;cin>>T;
	while(T--){
        int n , m , k ;
        cin >> n >> m >> k ;
        int ans = min(n,k) * min (m,k) ;
        cout << ans << '\n' ;
        
	}
    
	return 0 ;
}