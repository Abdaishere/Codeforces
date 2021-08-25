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
 
#define N 1e5
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
bool arr[(int) (N+1)];
 
int main() {
    FIO
    int n;
    // freopen("out.out","w", stdout);
    // freopen("in.in","r", stdin);
    vector<queue<string >> names;
    cin>>n;
    while(n--){
        string name, to;cin>>name>>to;
        auto i = names.begin();
        for(; i != names.end(); ++i){
            if (i->back() == name){
                i->push(to);
                break;
            }
        }
        if (i == names.end()){
            queue<string > q;
            q.push(name);
            q.push(to);
            names.push_back(q);
        }
    }
    cout<<names.size()<<endl;
    for(auto i:names){
        cout<<i.front()<<' '<<i.back()<<endl;
    }
}
