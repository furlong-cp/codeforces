#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ; 
    cin >> t ;
    // test cases
    while (t--){
        int n ; 
        cin >> n ;
        int arr[n] ; 
        for (int i = 0 ; i < n ; i++){
            cin >> arr[i] ; 
        }
        int ans = 0 ; 
        for (int i = 0 ; i<n ; i++){
            if ((i+1)%2 == 0) ans-=arr[i];
            else ans+= arr[i];
        }
        cout << ans << "
" ; 
        
    }
}