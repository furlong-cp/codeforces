#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n ; 
    string s;
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (s[0] == '+' ||s[2] == '+'){
            sum ++;}
        else {
            sum--;}
    }
    cout << sum << endl;
} 