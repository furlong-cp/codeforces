#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    int t ; 
    cin >> t ;
    while (t--){
        string s = "codeforces" ; 
        string a ; 
        cin >> a ; 
        int count = 0 ; 
        for (int i = 0 ; i < 10 ; i++){
            if (s[i]!=a[i]){
                count++ ; 
            } 
    }
        cout << count << '
' ; 
        
    }
}