#include<bits/stdc++.h>
#define LL long long int 
#define Loop(n) for(int i=0 ;i<n ;i++) // for loop 
#define Loop_J(n) for(int j=0 ;j<n ;j++) // for loop
#define Loop_from(m , n) for(int i=m ;i<n ;i++) // for loop n to m
#define R_Loop(n) for(int i=n-1 ;i>=0 ;i--) // reverse for loop
#define Sort_str(Name) sort(Name.begin(), Name.end()) // sort string small to big
#define Sort_arr_S_B(Name , size) sort(Name, Name + size) // Small to big
#define Sort_arr_B_S(name , size) sort(name, name + size , greater<int>()) // Big to small
#define Str_spase(Name) getline(cin, Name) // String with spase ... cin.ignore ; use for Clear the newline left in the buffer
#define Str_add(name, add_indx, letter) (name).insert((add_indx), 1, (letter)) // Add at index i
#define Str_erase(name , erase_index) (name).erase(erase_index, 1); // Remove from index i
#define Sort_vec_S_B(Name) sort(Name.begin(), Name.end()) // Sort vector small to big
#define Sort_vec_B_S(Name) sort(Name.rbegin(), Name.rend()) // Sort vector big to small
//  Container ...
#define Lop_con_In(name) for(auto it=name.begin(); it!=name.end(); it++)
#define Lop_con_Out(name) for(auto (it) : name)
#define Find_str(name, valu) name.find(valu)
#define Find_vec(name, valu) find(name.begin(), name.end(), valu)

using namespace std ;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	int T;cin>>T;
	while(T--){
        int n ;
        cin >> n ;
        string a , b ;
        cin >> a >> b ;
        bool ak = true ;
        for(int i = 0 ; i<n ; i++){
            if(a[i]=='R'&&b[i]!='R'){
                ak = false ;
            }
            else if((a[i]=='G'||a[i]=='B')&&(b[i]=='R')){
                ak = false ;
            }
        }
        if(ak){
            cout << "YES\n" ;
        }
        else{
            cout << "NO\n" ;
        }
        
	}
    
	return 0 ;
}