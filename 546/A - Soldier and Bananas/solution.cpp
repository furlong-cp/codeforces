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
    for (int i = 1 ; i <=w ; i++){
        sum += i*k ;
    }
    if ( sum-n>0){
        cout << sum-n ;
    }
    else {
        cout << 0 ; 
    }
 
 
    return 0;
}