/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int column = 0;
    int row = 0 ; 
    for (int i = 1 ; i <= 5 ; i++){
        for (int j = 1 ; j <= 5 ; j++){
            int k ; 
            cin >> k ;
            if (k == 1){
                column = i ;
                row = j ;
            }
        }
    }
    cout << abs(row -3) + abs(column-3);
 
    return 0;
}