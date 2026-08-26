#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    int n, k, l, c, d, p, nl, np ; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ; 
    // n  = n friends
    // k = buy k bottles of a soft drink
    // l = Each bottle has l milliliters of the drink
    // c = bought c limes 
    // d =  cut each of them into d slices
    // p = they found p grams of salt.
    // nl = each friend needs nl milliliters of the drink
    // np = slice of lime and np grams of salt
    int drink = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;
    int total_toasts = min({drink, lime, salt});
    cout << total_toasts / n;
    return 0;
}
    
 
 