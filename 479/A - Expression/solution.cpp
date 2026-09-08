#include <bits/stdc++.h>
using namespace std; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0) ;
 
    int a,b,c ; 
    cin >> a ; cin >> b ; cin >> c ; 
    // int op1 , op2 , op3 , op4 , op5 , op6 ... ; 
    int op1 = a*b*c ; 
    int op2 = a*(b+c) ;
    int op3= (a+b)*c ;
    int op4 = a+b*c ;
    int op5 = (a*b)+c ;
    int op6 = a+b+c ;
    int op7 = a*b+c ;
    cout << max({op1, op2, op3, op4, op5, op6, op7});
}