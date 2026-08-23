/*#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    vector<string> v(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    int count = 1;
 
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
            count++;
        }
    }
 
    cout << count << '
';
 
    return 0;
}*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string prev, curr;
    cin >> prev;
 
    int groups = 1;
 
    for (int i = 1; i < n; i++) {
        cin >> curr;
 
        if (curr != prev)
            groups++;
 
        prev = curr;
    }
 
    cout << groups;
}