#include<bits/stdc++.h>
#define Vac_arr(name, size) vector<int> name(size)
#define Loop(n) for(int i=0 ;i<n ;i++)
#define Loop_J(n) for(int j=0 ;j<n ;j++)
#define Loop_from(m , n) for(int i=m ;i<n ;i++)
#define R_Loop(n) for(int i=n-1 ;i>=0 ;i--)
#define Sort_str(Name) sort(Name.begin(), Name.end())
#define Sort_arr(Name, size) sort(Name, Name + size)
#define Str_spase(Name) getline(cin, Name)
#define Str_add(name, add_indx, letter) (name).insert((add_indx), 1, (letter))

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;cin>>T;
	while(T--){
        int n ;
        cin >> n ;
        if(n<4){
            cout << "NO\n" ;
            continue;
        }
        else{
            int x = n/2 ;
            if(x%2!=0){
                cout << "NO\n" ;
            }
            else{
                cout << "YES\n" ;
                int a = 0 ;
                int cou1 = 0 , cou2 = 0 ;
                for(int i = 1 ;a<x; i++){
                    if(i%2==0) {
                        cou1+= i ;
                        cout << i << " " ;\
                        a++ ;
                    }
                }
                a = 1 ;
                for(int i = 1 ;a<x; i++){
                    if(i%2!=0) {
                        cou2+= i ;
                        cout << i << " " ;\
                        a++ ;
                    }
                }
                //cout << cou1<< " " << cou2 << "\n" ;
                
                cout << cou1-cou2 << "\n" ;
            }
        }
        
	}
	return 0 ;
}