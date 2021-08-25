#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
 
#define EPS 1e-9
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
int main() {
    int tz, tx, l, r;
    cin >> tz >> tx >> l >> r;
    vector<pair<int, int>> zOnline, xOnline;
    while(tz--){
        int b,e;
        cin>>b >> e;
        zOnline.push_back(make_pair(b,e));
    }
    while(tx--){
        int b,e;
        cin>>b >> e;
        xOnline.push_back(make_pair(b,e));
    }
    int count=0, flag= 0;
    while(l <= r){
        for (auto i:zOnline){
            for(auto j:xOnline){
                if (!((j.first+l < i.first) && (j.second+l < i.first) || (j.first+l > i.second) && (j.second+l > i.second))){
                    flag = 1;
                    break;
                }
            }
        }
        count += flag;
        flag = 0;
        l++;
    }
    cout<<count;
}
