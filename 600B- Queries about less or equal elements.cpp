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
 
 
//inline void fastInputOutput(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);cout.tie(0);
//}
 
bool cmp(int a, int b){
    return a < b;
}
 
int main() {
    FIO
    int n, n2;
    cin>>n>>n2;
    vector<int> arr1;
    vector<pair<int,int>> arr2;
    for(int i=1; i<=n; ++i){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=1; i<=n2; ++i){
        int x;
        cin>>x;
        arr2.push_back(make_pair(x,i));
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> arr(n2);
    for(auto i: arr2){
        arr[(i.second)-1] = (upper_bound(arr1.begin(), arr1.end(), i.first) - arr1.begin());
    }
    for(auto i:arr)
        cout<<i<<' ';
}
