#include <bits/stdc++.h>
using namespace std ; 
 
int main (){
    string a,b;
    cin >> a ; 
    cin >> b ; 
    bool found = true ; 
    for (int i = 0 ; i < a.size() ; i++){
        if (a[i]==b[a.size()-i-1]){
            found = true ; 
        }
        else {
            found = false ; 
            break ; 
        }
    }
    if (a.size()==b.size()){
        if (found){
            cout << "YES" ;
        }
        else {
            cout << "NO" ; 
        }
    }
    else cout << "NO" ; 
}
 
/*#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0) ; 
 
    string a, b;
    cin >> a >> b;
 
    reverse(a.begin(), a.end());
 
    if (a == b)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}*/