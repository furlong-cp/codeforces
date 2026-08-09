#include <bits/stdc++.h>
using namespace std;
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n ; 
    string s;
    int sum = 0;
    while (n--){
        cin >> s;
        if (s[0] == '+' ||s[2] == '+'){
            sum ++;}
        else {
            sum--;}
    }
    cout << sum << endl;
} 