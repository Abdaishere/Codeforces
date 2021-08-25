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
    int n;
    cin>>n;
    deque<int> arr;
    for(int i=1; i<=n; ++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    cout<<arr.front()<<' ';
    arr.pop_front();
    for(int i=2; i<=n; i++){
        if (i%2){
            cout<<arr.front()<<' ';
            arr.pop_front();
        }else {
            cout << arr.back() << ' ';
            arr.pop_back();
        }
    }
}
