#include <bits/stdc++.h>
using namespace std;
 
#define Loop(n) for(int i = 0; i < n; i++)
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
        int NO1 = 0;
        int Max , Min ;
        Loop(2 * n) {
            int x;
            cin >> x;
            NO1 += x; 
        }
        int NO0 = 2*n - NO1 ;
 
        if(NO1==n*2||NO1==0){
            Max = 0 ;
            Min = 0 ;
        }
 
        else{
            Max = min(NO1 , NO0) ;
            if(NO1%2==1){
                Min = 1 ;
            }
            else Min = 0 ;
        }
 
        cout << Min << " " << Max << '\n';
    }
 
    return 0;
}