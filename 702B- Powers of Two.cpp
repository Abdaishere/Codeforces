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
class cmp {
public:
    bool operator()(pair<pair<int, tuple<int, int, int, int>>, string> &a,
                    pair<pair<int, tuple<int, int, int, int>>, string> &b) {
        if (a.first.first != b.first.first) return a.first.first > b.first.first;
        return a.second < b.second;
    }
};
 
int main() {
    FIO
    int n;
    // freopen("out.out","w", stdout);
    // freopen("in.in","r", stdin);
    ll count = 0;
    map<int, int> mp;
    vector<ll> vec;
    vector<int> nums;
    ll i = 1;
    while (i <= 2e9) {
        vec.push_back(i);
        i *= 2;
    }
    cin>>n;
    while (n--) {
        int x;
        cin >> x;
        mp[x]++;
        nums.push_back(x);
 
    }
    for (int i = 0; i < nums.size(); ++i) {
        mp[nums[i]]--;
        for (int j = 0; j < vec.size(); ++j) {
            count += mp[vec[j] - nums[i]];
        }
    }
    cout<<count;
}
