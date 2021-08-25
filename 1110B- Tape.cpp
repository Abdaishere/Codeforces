//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <fstream>
#include <bits/stdc++.h>
 
#define N 1e-9
#define endl '\n'
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
 
 
int main() {
    FIO
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> broken(n);
    for(auto &i: broken)
        cin>>i;
    int minlen = broken[n-1] - broken[0] + 1;
 
    for(int i=n-1; i> 0; --i){
        broken[i] -= broken[i-1] - 1;
    }
    broken[0] = 0;
 
    sort(broken.begin(), broken.end());
//    for(auto &i: broken)
//        cout<<i<<' ';
    for(int i=n-1; i> n - k; i--){
        minlen -= broken[i];
    }
    cout<<minlen + ((k-1)*2);
}
