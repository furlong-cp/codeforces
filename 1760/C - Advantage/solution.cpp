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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int m1 = arr[0];
        int m2 = arr[1];
        if (m2 > m1)
            swap(m1, m2);
        for (int i = 2; i < n; i++) {
            if (arr[i] > m1) {
                m2 = m1;
                m1 = arr[i];
            }
            else if (arr[i] > m2) {
                m2 = arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == m1)
                cout << m1 - m2 << " ";
            else
                cout << arr[i] - m1 << " ";
        }
        cout << '
';
    }
}