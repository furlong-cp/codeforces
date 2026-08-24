#include <bits/stdc++.h>
using namespace std ; 
 
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    int n ; 
    cin >> n ; 
    int a,b,c ; 
    for (int i = 0 ; i < n ; i++){
        cin >>a >> b >> c ; 
        if (a+b==c || a+c==b || b+c==a) cout << "YES" << "
";
        else cout << "NO" << "
" ;
    }
}