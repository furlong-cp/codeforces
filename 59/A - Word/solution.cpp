/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s; // input string 
    cin >> s;
    int ucount = 0 , lcount = 0; // count systems
    for (int i = 0 ; i < s.length() ; i++){
        if (isupper(s[i])){
            ucount++;
        }
        else {
            lcount++;
        }
    }
    if (ucount > lcount){
        for (char &c : s){
            c = toupper(c);
        }
    }
    else {
        for (char &c : s){
            c = tolower(c);
        }
    }
    cout << s ;
    return 0;
}