#include <bits/stdc++.h>
using namespace std;
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ; 
    cin >> n ; 
    
    vector <int> v(n);
 
    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int ans  = 0 ; 
    int inc = 1 ; 
    for (int i = 0 ; i < n-1 ; i++){
        if (v[i] <= v[i+1]){
            inc++;
        }
        else {
            ans = max(ans , inc);
            inc = 1 ; 
        }
    }
    ans = max(ans , inc);
    cout << ans;
    
 
 
 
}