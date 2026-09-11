#include <bits/stdc++.h> 
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0) ;
    cin.tie(0);
    
    int t ; // test cases
    cin >> t ;  
    bool found = false ; 
    while (t--){
        int a,b,c ; 
        cin >>a >> b >> c ;  
        //if (a+b+c >=10) found = true ; 
        if (a+b >= 10) found = true ; 
        else if (b+c >= 10) found = true ; 
        else if (c+a >= 10) found =true  ; 
        else found = false ; 
        if (found) cout << "YES
" ; 
        else cout << "NO
" ; 
    }
}