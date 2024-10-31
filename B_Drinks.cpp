#include<bits/stdc++.h>
/*#include <stdio.h>

int main() {
    int x , i , b ;
    scanf("%d",&x) ;
    double sum=0 , a ;
    for (i=0 ;i<x ;i++){
        scanf("%d",&b) ;
        sum+=b ;
    }
    a = sum/(x*1.0) ;
    printf("%.12lf\n",a) ;
    return 0;
}*/


using namespace std ;

int main () {
    int n , b ;
    cin >> n ;
    double sum = 0 , a ;
    for (int i =0 ;i<n ;i++){
        cin >> b ;
        sum += b ;
    }
    a = sum/(n*1.0) ;
    
    cout << fixed << setprecision(12) << a << "\n";
    
    return 0 ;
}