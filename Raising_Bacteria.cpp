#include <bits/stdc++.h>
#define LL long long int 

using namespace std;

const int Siz = 30; 
LL potw[Siz];

void power() {
    LL limit = 1000000000;
    LL power = 1;
    int index = 0;

    while (power <= limit) {
        potw[index++] = power;
        power *= 2;
    }
}

int look(int &num) {
    int big = 0, count = 0;
    for (int i = 0; i < Siz; i++) {
        if (potw[i] <= num) {
            big = i;
        }
    }
    
    num -= potw[big];
    count++;

    if (num == 0) {
        return count;
    }
    return count + look(num); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    power();
    int x;
    cin >> x;
    cout << look(x) << "\n";

    return 0;
}
