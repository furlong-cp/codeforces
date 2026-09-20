#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0) ; 
    cin.tie(0) ;
    
    int t ; 
    cin >> t ; 
    while (t--){
        char arr[] = {'c' , 'o' , 'd' , 'e' , 'f' , 'r' , 'c' , 's'} ; 
        char a ; 
        cin >> a ;
        bool found = false ; 
        for (char x : arr){
            if (a == x) {
                found = true ; 
            }
        }
        if (found){
            cout << "YES
" ; 
        }
        else {
            cout << "NO
" ; 
        }
    }
}