#include<bits/stdc++.h>
#define Loop(n) for(int i=0 ;i<n ;i++)
#define Loop_J(n) for(int j=0 ;j<n ;j++)

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	int T;cin>>T;
	while(T--){
        int n ;
        cin >> n ;
        int arr[n][n] ;
        int ar[n*n+5] = {} ;
        int sum = 0 ;
        Loop(n){
            Loop_J(n){
                cin >> arr[i][j] ;
                if(i==j&&(arr[i][j]<ar[0])){
                    ar[0] = arr[i][j] ;
                }
                else if(i>j&&arr[i][j]<ar[i-j+1]){
                    ar[i-j+1] = arr[i][j] ;
                }
                else if(j>i&&(arr[i][j]<ar[n+j-i])){
                    ar[n+j-i] = arr[i][j] ;
                }

            }
        }
        Loop(n*n+5){
            sum += ar[i] ;
        }
        cout << abs(sum) << "\n" ;

	}
	return 0 ;
}