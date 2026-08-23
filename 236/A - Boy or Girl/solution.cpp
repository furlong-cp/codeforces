#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s ; 
    cin >> s ; 
    unordered_set <char> us ; 
    for (auto x : s){
        us.insert(x) ;
    }
    if (us.size() %2 == 0){
        cout << "CHAT WITH HER!" << "
" ;
    }
    else {
        cout << "IGNORE HIM!" << "
" ;
    }
}