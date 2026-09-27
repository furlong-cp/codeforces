#include <bits/stdc++.h>
using namespace std; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while (t--){
        int n ; 
        cin >> n ; 
        set <int> s ; 
        int arr[n] ;
        for (int i = 0 ; i < n  ; i++){
            int a ;
            cin >> a ;
            arr[i] = a ; 
            s.insert(a);
        }
        if (s.size()== (sizeof(arr)/sizeof(arr[0]))){
            cout << "YES
" ; 
        }
        else {
            cout << "NO
" ; 
        }
        
        
    }
 
}