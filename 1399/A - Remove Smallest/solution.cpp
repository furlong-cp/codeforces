#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ; cin >> t ; 
    while (t--){
        int n ; 
        cin >> n  ;
        int arr[n];
        for (int i = 0 ; i<n ; i++){
            cin >> arr[i] ; 
        }
        bool found = true ; 
        sort(arr,arr+n) ;
 
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] > 1) {
                found = false;
                break;
                }
            }
        if (found) cout << "YES
" ; 
        else cout << "NO
" ; 
    }
}