#include <bits/stdc++.h>
using namespace std; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    int n ; 
    cin >> n;
    int count = 0 ; 
    string s ;
    for (int i = 0 ; i < n  ; i++){ 
        cin >> s; 
        if ( s == "Tetrahedron") count +=4;
        else if ( s == "Cube") count +=6 ;
        else if ( s == "Octahedron") count +=8 ; 
        else if ( s == "Dodecahedron") count +=12 ; 
        else if ( s == "Icosahedron") count +=20 ;
        else continue ;   
    }
    cout<< count ; 
 
}