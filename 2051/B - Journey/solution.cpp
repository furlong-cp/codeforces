/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long t; // test cases
    cin >> t ; // input test cases
    // Day n  -  a kms
    // Day n+1 - b kms
    //Day n+2 - c kms
    // loop 1  = a+b+c
    while (t--){
        int n,a,b,c; // n is total kms walked
        // to find on which day he stopped walking / finished journey
        cin >> n >> a >> b >> c ;
        int day_count = 0 ;// count number of days he walked
        int loop = n % (a+b+c);
        day_count += 3*(n/(a+b+c));
 
        while (loop>0) { 
            if (loop <=a) {
                day_count++;
                loop -=a;
            }
            else if (loop <= (a+b)){
                day_count+=2;
                loop -= (a+b);
            }
            else {
                day_count+=3;
                loop-=(a+b+c);
            }
        }
        cout << day_count << "
";
 
    }
    return 0;
}