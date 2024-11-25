#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T ;
    cin >> T ;

    while (T--) {
        int n ;
        cin >> n ; 
        vector<int> arr(n) ;

        int odd_count = 0, even_count = 0 ; 
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                ++even_count;
            else
                ++odd_count;
        }

        if (odd_count > 0 && (even_count > 0 || odd_count % 2 == 1)) {
            cout << "YES\n" ;
        } else {
            cout << "NO\n" ;
        }
    }

    return 0;
}
