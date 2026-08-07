#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; // test cases
    cin >> t;
 
    while (t--) {
        int n; // number of cards
        cin >> n;
        bool last = true; // check for last number only
        int j = n + 1;
        for (int i = 2; i*i <= j; i++) {
            if (j % i == 0) {
                last = false;
                break;
            }
        }
        if (last)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
}