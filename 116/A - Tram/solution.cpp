/*#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    int n ; 
    cin >> n ;
    int a,b ;
    int cap=0 ; 
    int maxcurr=0 , maxrn=0; 
    for (int i = 0 ; i < n ; i++){
        cin >> a >> b ; 
        cap -=a;
        cap += b;
        maxrn = cap ; 
        maxcurr = max(maxcurr , maxrn) ; 
    }
    cout << maxcurr ; 
}*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int maxcurr = 0, maxrn = 0;
 
    while (n--) {
        int a, b;
        cin >> a >> b;
 
        maxcurr += b - a;
        maxrn = max(maxrn, maxcurr);
    }
 
    cout << maxrn;
}