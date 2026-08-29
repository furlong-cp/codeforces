/*#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b;
    cin >> a >> b;
 
    int diff = 0;
    int same = 0;
 
    while (a + b > 0) {
        if (a >= 1 && b >= 1) {
            diff++;
            a--;
            b--;
        }
        else if (a >= 2) {
            same++;
            a -= 2;
        }
        else if (b >= 2) {
            same++;
            b -= 2;
        }
        else {
            break;
        }
    }
 
    cout << diff << " " << same;
}*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
 
    int diff = min(a, b);
    int same = abs(a - b) / 2;
 
    cout << diff << " " << same;
}