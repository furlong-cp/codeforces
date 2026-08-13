/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y; // year
    cin >> y; // input year
 
    while (true) {
        y++;
        int a = y / 1000; // check thousand-th digit
        int b = y / 100 % 10; // check hundred-th digit
        int c = y / 10 % 10; // check ten-th digit
        int d = y % 10; // check ones digit
 
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y;
            break;
     
        }
    }
 
    return 0;
}