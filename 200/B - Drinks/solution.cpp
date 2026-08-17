/*
   author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t ; // test cases 
    cin >> t ; // input test cases
    
    vector <int> v(t) ; 
    for (int i = 0 ; i < t ; i++){
      cin >> v[i] ; 
    }
    double sum = 0 ;
    for (int i = 0 ; i < t ; i++){
      sum+= v[i] ; 
    }
    double ans = sum/t;
    cout << fixed << setprecision(12) << (ans) ;
    return 0;
}