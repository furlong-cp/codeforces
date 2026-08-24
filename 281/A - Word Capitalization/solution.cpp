#include <bits/stdc++.h>
using namespace std;
 
int main (){
    ios::sync_with_stdio(0) ;
    cin.tie(0); 
    string s ; 
    cin >> s ; 
    for (int i = 0 ; i < 1 ; i++){
        if (islower(s[i])) {
            for (auto &x : s ){
                if (x == s[i]){
                    x=toupper(x) ;
                }
            }
        }
 
    }
    cout << s ; 
}