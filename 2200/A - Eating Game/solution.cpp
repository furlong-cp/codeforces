#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[10];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int m = *max_element(a, a + n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == m) {
                ans++;
            }
        }
        cout << ans << '
';
    }
    return 0;
}