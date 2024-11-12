#include<iostream>
using namespace std ;

int main () {
    int t , i ;
    cin>>t ;
    for(i=0 ;i<t ;i++){
        int n , k ;
        cin >> n ;
        int str[n] ;
        int num = 0 ;
        for (int  j = 0; j < n; j++)
        {
            cin>>str[j] ;
        }
        for (int  j = 0; j < n; j++)
        {
            if((j+1)==str[j]){
                num ++ ;
            }
        }
        if(num==0){
            k = 0 ;
        }
        else if(num%2){
            k=num/2+1 ;
        }
        else{
            k=num/2 ;
        }
        cout<<k<<"\n" ;
        
    }
    
    return 0 ;
}
/*#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int str[n];
        int num = 0;
        
        // Input the array
        for (int j = 0; j < n; j++) {
            cin >> str[j];
        }

        // Count how many times (1-based index) == value in array
        for (int j = 0; j < n; j++) {
            if ((j + 1) == str[j]) {
                num++;
            }
        }

        // Calculate k based on the count of matching positions
        int k;
        if (num == 0) {
            k = 0;
        } else if (num % 2 == 1) {  
            k = num / 2 + 1;
        } else {  
            k = num / 2;
        }

        cout << k << "\n";
    }
    
    return 0;
}
*/
/*#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Number of students/chairs
        vector<int> p(n);  // Permutation array
        
        int num = 0;  // Count of students who are happy (seated on the correct chair)
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] == i + 1) {  // If student i is seated on chair i+1
                num++;
            }
        }
        
        int k;
        if (num == 0) {
            k = 0;  // If no one is in their correct position, no swaps are needed
        } else if (num % 2 == 1) {
            k = num / 2 + 1;  // If num is odd, it requires one additional swap
        } else {
            k = num / 2;  // If num is even, just divide the number of happy students by 2
        }

        cout << k << "\n";  // Output the minimum number of moves for this test case
    }
    
    return 0;
}
*/