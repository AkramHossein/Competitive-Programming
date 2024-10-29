#include<iostream>
#include<string>
#include<algorithm> 

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    
    string combined = a + b;
    
    sort(combined.begin(), combined.end());
    sort(c.begin(), c.end());

    if (combined == c) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
