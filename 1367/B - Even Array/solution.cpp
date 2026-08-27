#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        int evenWrong = 0;
        int oddWrong = 0;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 != v[i] % 2) {
 
                if (i % 2 == 0)
                    evenWrong++;
                else
                    oddWrong++;
            }
        }
 
        if (evenWrong != oddWrong)
            cout << -1 << '
';
        else
            cout << evenWrong << '
';
    }
 
    return 0;
}