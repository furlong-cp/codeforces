/*
        author - furlong
*/
 
#include <bits/stdc++.h>
using namespace std;
typedef string str ; 
typedef char ch ; 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        ch c;
        cin >> n >> c;
        str s;
        cin >> s;
        int ans =0;
        for (int i = 0; i <n/2; i++) {
            int k =n-i-1;
            if (s[i] == s[k]) {
            }
            else if (s[i] == c || s[k] == c) {
                ans += 1;
            }
            else {
                ans += 2;
            }
        }
        cout << ans << '
';
    }
    return 0;
}