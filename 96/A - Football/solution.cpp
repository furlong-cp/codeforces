#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s ; 
    cin >> s ;
    int c = 1 ; 
    for (int i = 1 ; i < s.length() ; i++){
        if (s[i]==s[i-1]){ 
            c++ ;
            if (c>=7) break ; 
        }
        
        else {
            c=1 ;
        }
    }
    (c>=7) ? cout << "YES" : cout << "NO" ; 
    return 0; 
}