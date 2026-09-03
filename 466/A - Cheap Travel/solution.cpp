#include <bits/stdc++.h>
using namespace std;
 
int main (){
    ios::sync_with_stdio(0) ;
    cin.tie(0)  ;
 
    int n,m,a,b;
    cin >> n >> m >> a >> b ;
    int add = 0 ;
 
    if (n<m){
        int pehle = n*a ;
        int dusre = b ;
        add += min(pehle,dusre) ;
    }
    else {
        int pehle = (n/m)*b + (n%m)*a ;
        int dusre = n*a ;
        int teesra =(n/m)*b + b;
        add += min({pehle,dusre,teesra}) ;
    }
 
    cout << add ;
 
}