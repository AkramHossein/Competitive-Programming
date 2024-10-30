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

using namespace std ;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ;
    Str_spase(s) ;
    int feq_arr[26] = {} ;
    Loop(s.length()){
        if(s[i]>=97&&s[i]<=122){
            feq_arr[s[i]-'a']++ ;
        }
    }
    int count = 0 ;
    Loop(26){
        if(feq_arr[i]!=0) count++ ;
    }
    cout << count << "\n" ;
    return 0 ;
}