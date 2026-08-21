/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n , k ;
    cin >> n >> k ; 
    // n = number of participants 
    // k = th finisher score
    vector <int> v(n);
    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int count = 0;
    int m = v[k-1];
    for (int j = 0 ; j < n ; j++){
        if (v[j]>=m && v[j]!=0){
            count++;
        }
    }
    cout << count ;
    return 0;
}