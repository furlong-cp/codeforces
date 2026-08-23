#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n , h ;
    int a ; 
    cin >> n >> h ;
    int count =0 ;
    for (int i = 1 ; i<= n ; i++){
        cin >> a ; 
        if (a>h) count += 2 ;
        else count ++ ;
    }
    cout << count ; 
    
}