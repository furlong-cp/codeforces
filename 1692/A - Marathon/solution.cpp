#include <bits/stdc++.h>
using namespace std; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0) ;
 
    int t ;
    cin >> t ;
    
    
    vector <int> v(4) ;
    while (t--){
        for (int i = 0 ; i < 4 ; i++){
            cin >> v[i];
        }
        int count = 0 ; 
        int pos = v[0] ;
        for (int i = 1 ; i <4 ; i++){
            if (pos < v[i]) count++; 
        }
        cout << count << "
"; 
}
}