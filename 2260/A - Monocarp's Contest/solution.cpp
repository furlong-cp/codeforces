#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    unsigned short int t; // test cases
    cin >> t;
 
    while (t--) {
        unsigned short int n;
        cin >> n;
 
        vector <int> v(n);
        int zeros = 0;
 
        for (int &x : v) {
            cin >> x;
            if (x == 0) zeros++;
        }
 
        if (zeros < 2) {
            cout << -1 << "
" ; 
        }
        else if ((v[0] == 0) && (v[n - 1] == 0)) {
            cout << 0 << "
";
        }
        else if ((v[0] == 0) || (v[n - 1] == 0)) {
            cout << 1 << "
";
        }
        else {
            cout << 2 << "
";
        }
    }
}