#include <bits/stdc++.h>
using namespace std;
 
const int top = 5000000;
int factors[top + 1];
int prefix[top + 1];
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i <= top; i++) {
        if (factors[i] == 0) {
            for (int j = i; j <= top; j += i) {
                int x = j;
                while (x % i == 0) {
                    factors[j]++;
                    x /= i;
                }
            }
        }
    }
    for (int i = 1; i <= top; i++) {
        prefix[i] = prefix[i - 1] + factors[i];
    }
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[a] - prefix[b] << '
';
    }
    return 0;
}