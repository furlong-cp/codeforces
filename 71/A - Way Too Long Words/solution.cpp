#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t ; 
    cin >> t ; 
    // test cases
    while (t--){
        string s ; 
        cin >>s ; 
        (s.length() <= 10) ? cout << s << "
" : cout << s[0] << s.length()-2 << s[s.length()-1] << "
" ; 
    }
    return 0; 
}