#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n ; 
    cin >> n ; 
    vector <int> v(n) ; 
    int odd =  0; 
    int even = 0 ; 
    for (int i = 0 ; i < n ; i++){
        cin >>v[i] ;
        if (v[i] %2 == 0 ) even++ ; 
        else odd++ ;
        
    }
    
    /*for (int i = 0 ; i < n ; i++){
        if (v[i] %2 == 0 ) even++ ; 
        else odd++ ; 
    }*/
    int j = 0 ; 
    if (even>odd){
        for (int i = 0 ; i < n ; i++){
            if (v[i]%2!= 0 )  j=i+1 ; 
        }
        
    }
    else {
        for (int i = 0 ; i < n ; i++){
            if (v[i]%2== 0 )  j=i+1 ; 
        }
        
    }
    cout << j << '
' ; 
}