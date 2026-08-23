#include <bits/stdc++.h>
using namespace std;
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int p,q ;
    int count = 0;
    for (int i = 1 ; i <= n  ; i++){
        cin >> p >> q ;
        if (q-p >1) count++ ;
    }
    cout << count ;
 
}