/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n ,k ; // n = number of problems in contest, k = number of minutes to reach limak house
    cin >> n >> k; 
    // 5*i minutes for ith problem
    // contest start time - 20:00 and midnight to reach limak 24:00
    // time he has 4 hours ie 240 mins
    // time for contest = (240mins - k) as he has to reach the house 
    // then with leftover time you do 5*i and minus it till the time>0
    int total_time = 240;
    int time_left = total_time - k;
    int problem_count =0 ;
    for ( int i = 1 ; i <= n ; i++){
        if (time_left >= 5*i){
            time_left -= 5*i ;
            problem_count++;
            //cout << "Debugger" << "
";
        }
    }
    cout << problem_count; 
    
    return 0;
}