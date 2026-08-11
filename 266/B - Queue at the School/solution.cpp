/*
    author : furlong
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t; // n = number of children & t = number of seconds
    cin >> n >> t;
    string s; // store the queue.
    cin >> s;
    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
 
    cout << s << '
';
    return 0;
}