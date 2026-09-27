#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m , n ; 
    cin >> m >> n ; 
    int arr[m];
    vector <int> v ; 
    for (int i = 0 ; i < m ; i++){
        cin >> arr[i] ; 
    }
    for (int i = 0 ; i < m ; i++){
        if (arr[i] < 0 ){
            v.push_back(0-arr[i]) ; 
        }
    }
    sort(v.begin(),v.end(),greater<int>()) ;
    int ans = 0 ; 
    for (int i = 0 ; i < min(n, (int)v.size()) ; i++){
        ans+=v[i] ; 
    }
    cout << ans ; 
    
    return 0 ;
}