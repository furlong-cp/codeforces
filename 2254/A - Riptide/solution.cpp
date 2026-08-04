#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> vect(3);
        cin >> vect[0] >> vect[1] >> vect[2];
        int ans = 0;
        while (true) {
            if (vect[0] == vect[1] || vect[1] == vect[2] || vect[0] == vect[2]) {
                cout << ans << endl;
                break;
            }
            int max = max_element(vect.begin(), vect.end())- vect.begin() ;
            int min = min_element(vect.begin(), vect.end()) - vect.begin();
            vect[max]--;
            vect[min]++;
            ans++;
        }
    }
}