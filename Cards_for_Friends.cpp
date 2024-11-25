#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int w, h, n;
        cin >> w >> h >> n;

        long long max_sheets = 1; 
        while (w % 2 == 0) {
            w /= 2;
            max_sheets *= 2;
            if(max_sheets>= n){
                break ;
            }
        }
        while (h % 2 == 0) {
            h /= 2;
            max_sheets *= 2;
            if(max_sheets>= n){
                break ;
            }
        }

        if (max_sheets >= n) {
            cout << "YES\n" ;
        } else {
            cout << "NO\n" ;
        }
    }

    return 0;
}
