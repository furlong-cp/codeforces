#include <bits/stdc++.h>
using namespace std ;
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    unsigned int n ;
    cin >> n ;
    string s;
    cin >> s ;
    unsigned int count =0 ;
    for (unsigned int i = 1 ; i <= s.size()+1 ; i++){
        if (s[i]==s[i-1]) count++;
        else if (i==n) break ;
        else continue ;
    }
    cout << count ;
}