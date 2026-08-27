#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    int total = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }
 
    sort(v.rbegin(), v.rend());
 
    int yourSum = 0;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        yourSum += v[i];
        count++;
 
        if (yourSum > total - yourSum) {
            break;
        }
    }
 
    cout << count;
 
    return 0;
}