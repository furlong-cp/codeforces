#include <bits/stdc++.h>
using namespace std; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n ; // test cases
    cin >> n ; 
    int ans=0 ; 
    while (n--){
        // vector <int> v(3) ;
        int count = 0 ; 
        int a ;  
        for (int i = 0 ; i < 3 ; i++){
            cin >> a ; 
            if (a == 1) count++ ;
        }
        if (count >= 2) ans++ ;
        
 
    }
    cout << ans << endl ;
}