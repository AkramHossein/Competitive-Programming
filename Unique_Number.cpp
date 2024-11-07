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
    cin.tie(nullptr);
	int T;cin>>T;
	while(T--){
        int n ;
        cin >> n ;
        if(n<10){
            cout << n << "\n" ;
            continue;
        }
        if(n>45){
            cout << "-1\n" ;
            continue;
        }
        int arr[9] = {} ;
        R_Loop(9){
            if(n>=i+1){
                arr[i] = i+1 ;
                n -= i+1 ;
            }
            else{
                arr[i] = n ;
                n = 0 ;
                break;
            }
        }
        Loop(9) {
            if(arr[i]==0) continue;
            else{
                cout << arr[i] ;
            }
        }
        cout << "\n" ;
        
	}
	return 0 ;
}