#include<bits/stdc++.h>
#define LL long long int 

using namespace std ;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	int T;cin>>T;
	while(T--){
        int n , b , x ;
        cin >> n ;
        b = (n+1)/2 ;
        queue <int> ak ;
        stack <int> as ;
        for(int i = 0 ; i< n ; i++){
            cin >> x ;
            if(i<b) ak.push(x);
            else as.push(x);
        }
        while (!ak.empty() || !as.empty()) {
            if (!ak.empty()) {
                cout << ak.front() << " " ;
                ak.pop() ;
            }
            if (!as.empty()) {
                cout << as.top() << " " ;
                as.pop() ;
            }
        }
        cout << "\n" ; 
        
	}
    
	return 0 ;
}