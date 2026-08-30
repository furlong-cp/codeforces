#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0) ; 
    int t;
    cin >> t;
    int mish = 0, chris = 0;
    while (t--) {
        int m, c;
        cin >> m >> c;
 
        if (m > c)
            mish++;
        else if (c > m)
            chris++;
    }
    if (mish > chris)
        cout << "Mishka
";
    else if (chris > mish)
        cout << "Chris
";
    else
        cout << "Friendship is magic!^^
";
    return 0;
}