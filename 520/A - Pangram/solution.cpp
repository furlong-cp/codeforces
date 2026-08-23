#include <bits/stdc++.h>
using namespace std;
int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0) ;
    int n;
    cin >> n;
    set<char> s;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        s.insert(tolower(c));
    }
    if (s.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}