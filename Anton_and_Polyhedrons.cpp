#include<iostream>
#include<string>

using namespace std;

int main() {
    int t, count = 0;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string a;
        cin >> a;

        if (a == "Tetrahedron") {
            count += 4;
        }
        else if (a == "Cube") {
            count += 6;
        }
        else if (a == "Octahedron") {
            count += 8;
        }
        else if (a == "Dodecahedron") {
            count += 12;
        }
        else if (a == "Icosahedron") {
            count += 20;
        }
    }
    
    cout << count << "\n";
    
    return 0;
}
