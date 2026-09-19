#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    long long n, k;
    cin >> n >> k;
 
    long long odds = (n + 1) / 2;
 
    if (k <= odds)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - odds);
 
    return 0;
}