#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        unsigned short int b, c, h;
        cin >> b >> c >> h;
        unsigned short int mid = min(c + h, b - 1);
        unsigned short int layer = 2 * mid + 1;
        cout << layer << '
';
    }
}