#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        long long n, a, b, c, d, e;
        cin >> n;
        
        
        a = n * 4;
        b = (n - 1);
        c = 3; 
        
        
        if (n > 2) {
            d = (n - 2) * (n - 1);  
        } else {
            d = 0;  
        }

        e = a + b + c + d - 2;
        cout << e << "\n";
    }
    
    return 0;
}
