/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t ; // test cases
    cin >> t; 
    while (t--) {
        int n,a,b ;
        cin >> n >> a >> b ;
        // n = number of students 
        // a = one key proce for access of 1 student
        // b = one key price for access of 3 students 
        long long groups = n / 3;
        long long left = n % 3;
        int j = 3*a;
        int k = left*a;
        long long ans = groups * min(j, b)+ min (k, b);
 
        cout << ans << "
";
    }
    return 0 ; 
}