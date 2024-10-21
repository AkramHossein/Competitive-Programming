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
    int T; cin >> T;
    while(T--){
        string st;
        cin >> st;
        int x = st.length();

        if(x <= 2){
            cout << st << "\n";
            continue;
        } else {
            int i = 1;
            while (i + 1 < st.size()) {
                if (st[i] == st[i - 1]) {
                    st.erase(i , 1);
                }
                i++ ;
            }
        }
        cout << st << "\n";
    }
    return 0;
}
