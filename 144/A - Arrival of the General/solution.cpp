#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxindex = 0;
    int minindex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxindex]) {
            maxindex = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] <= a[minindex]) {
            minindex = i;
        }
    }
    int ans = maxindex + (n - 1 - minindex);
    if (maxindex > minindex) {
        ans--;
    }
    cout << ans << '
';
    return 0;
}