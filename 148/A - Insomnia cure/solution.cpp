#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k,l,m,n,d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int count =0;
    for (int i = 1 ; i <= d ; i++){
        if (i%k ==0) count++;
        else if (i%l ==0) count++;
        else if (i%m ==0) count++;
        else if (i%n ==0) count++;
        else continue ;
    }
    cout << count ; 
 
}