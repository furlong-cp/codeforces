/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    // i*k dolar price per banana
    // w  = banana to buy
    // n = dollar he has
 
    int k , n , w ;
    cin >> k >> n >> w ; 
 
    int sum = 0 ;
    while(w>0){
        sum += w*k ;
        w--;
    }
    if ( sum-n>0){
        cout << sum-n ;
    }
    else {
        cout << 0 ; 
    }
 
 
 
    return 0;
}