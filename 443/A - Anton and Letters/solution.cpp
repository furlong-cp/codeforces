#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    set <char> s;
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            s.insert(a[i]);
        }
    }
 
    cout << s.size();
}