#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ; 
    cin >> n ; 
    vector <int> v(n) ; 
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ; 
    }
    sort(v.begin() , v.end()) ;
    int cnt = 0;
    int j = 0;
    for (int i = v[0]; i <= v[n-1]; i++) {
        if (j < n && i == v[j]) {
            j++;
        }
        else {
            cnt++;
        }
    }
    cout << cnt;
    return 0 ; 
}