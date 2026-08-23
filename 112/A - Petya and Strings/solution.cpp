/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s1, s2;
    cin >> s1 >> s2;
 
    // Convert both strings to lowercase or 
    for (char &x : s1) {
        x = tolower(x);
    }
 
    for (char &x : s2) {
        x = tolower(x);
    }
 
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] < s2[i]) {
            cout << -1;
            return 0;
        }
        else if (s1[i] > s2[i]) {
            cout << 1;
            return 0;
        }
    }
 
    cout << 0;
    return 0;
}