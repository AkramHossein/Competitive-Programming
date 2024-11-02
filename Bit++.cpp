#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string ak;
    int x = 0;
    for (int i = 0; i < n; i++) {
        cin >> ak;
        if (ak == "++X" || ak == "X++") {
            x++;
        } else if (ak == "--X" || ak == "X--") {
            x--;
        }
    }
    cout << x << "\n";

    return 0;
}
