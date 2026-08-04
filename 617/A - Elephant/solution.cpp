#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    int count =0;
    while (t>0){
        if (t/5>0){
            count+=1;
            t-=5;
        }
        else if (t/4>0){
            count+=1;
            t-=4;
        }
        else if (t/3>0){
            count+=1;
            t-=3;
        }
        else if (t/2>0){
            count+=1;
            t-=2;
        }
        else if (t/1>0){
            count+=1;
            t-=1;
        }
    }
    cout<<count<<endl;
}