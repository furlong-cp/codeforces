/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t ; // test cases 
 
    while (t--){
        int n; // number of legs
        cin >> n ; // always even specified in input 
        // chicken has 2 legs & cows have 4 
        /* Method 
        Do n modulo 4 and check if rem>0 and if true count++ and n-count and n module 2>0 then count++ for chickens*/
        int animal_count = 0;
        while (n>0){
            if (n % 4 == 0){
                animal_count++;
                n-=4;
            }
            else {
                animal_count++;
                n-=2;
            }
        }
        cout << animal_count << "
" ;
    }
    return 0;
}