#include <bits/stdc++.h>
using namespace std ;
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s  ; 
    cin >> s ; 
    bool found  =  false ; 
    for (int i = 0 ;  i  < s.length() ; i++){
        if (s[i]=='Q' || s[i]=='H' || s[i]=='9') {
            found = true ; 
            break ; 
        }
    }
    if (found) cout << "YES";
    else cout << "NO"  ;
}