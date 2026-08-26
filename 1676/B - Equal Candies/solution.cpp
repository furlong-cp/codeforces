#include <iostream>
#include <vector> 
 
using namespace std ; 
 
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t ; // test cases
    cin >> t ; 
 
    while (t--){
        int n ; 
        cin >> n ;
        vector <int> v(n);
        for (int i = 0 ; i < n ; i++){ // input ai candies in each box
            cin >> v[i] ; 
        }
        int minc=v[0];
        for (int i = 1 ; i < v.size() ; i++){
            if (v[i]<minc) minc = v[i];
        }
        int count = 0 ; 
        for (int i = 0 ; i < n ; i++){
            if (v[i]==minc) continue ;
            else {
                count += abs(v[i]-minc) ; 
            }
        }
        cout << count << "
" ; 
 
    }
}