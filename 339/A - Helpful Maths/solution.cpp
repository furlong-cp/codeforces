#include <bits/stdc++.h>
using namespace std;
 
typedef string str;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    str s;
    cin >> s;
 
    vector<int> v;
 
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            int x = s[i] - '0';
            v.push_back(x);
        }
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) {
            cout << v[i];
        }
        else {
            cout << v[i] << "+";
        }
    }
}