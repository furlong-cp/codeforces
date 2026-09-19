#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    
    int n ; 
    int count = 0 ; 
    cin >> n ; 
    while (n>0){
        if (n>=100){
            count += n/100 ; 
            n%=100 ; 
        }
        else if (n>= 20){
            count += n/20 ; 
            n%=20 ;
        }
        else if (n>=10){
            count += n/10 ; 
            n%=10 ;
        }
        else if (n>=5){
            count += n/5 ; 
            n%=5 ;
        }
        else {
            count += n/1 ; 
            n%=1 ;
        }
    }
    cout << count ; 
}