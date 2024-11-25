#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0\n"; 
        } else if (a < b) {
            if ((a % 2) != (b % 2)) {
                cout << "1\n"; 
            } else {
                cout << "2\n"; 
            }
        } else {
            if ((a % 2) == (b % 2)) {
                cout << "1\n"; 
            } else { 
                cout << "2\n"; 
            }
        }
    }

    return 0;
}
