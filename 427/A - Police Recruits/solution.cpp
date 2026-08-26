#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int recruits = 0;
    int crimes = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            if (recruits > 0) {
                recruits--;
            } else {
                crimes++;
            }
        } else {
            recruits += x;
        }
    }
    cout << crimes;
    return 0;
}