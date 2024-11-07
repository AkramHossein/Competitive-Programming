#include<iostream>

using namespace std;

int main() {
    long long n ;
    cin >> n ;

    if (n % 2 == 0) {
        cout << n / 2 << "\n" ;   // For even n
    } else {
        cout << -(n / 2 + 1) << "\n" ;   // For odd n
    }

    return 0;
}
