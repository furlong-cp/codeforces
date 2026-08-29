/*
        author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t; // test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> v(n);
        for (auto &x : v)
            cin >> x;
        long long sol = 0;
        for (int i = 0; i < n; i++) {
            sol = max(sol, gcd(v[0], gcd(v[i], v[n - 1])));
        }
        cout << sol << '
';
    }
    return 0;
}