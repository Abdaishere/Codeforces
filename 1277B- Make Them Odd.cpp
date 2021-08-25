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
    cin >> n;
    while (n--) {
        priority_queue<int> pq;
        int l;
        cin >> l;
        while (l--) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                pq.push(x);
        }
        int brev = -1, count = 0;
        while (!pq.empty()) {
            int a = pq.top();
            pq.pop();
            if (a % 2 != 0)
                continue;
            count += brev != a;
            brev = a;
            pq.push(a/2);
        }
        cout << count << endl;
    }
}
 
 
