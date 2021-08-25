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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
 
 
int main() {
    fastInputOutput();
    int n, m;
    cin >> n >> m;
    vector<bool> ans(m + 1, 0);
    while (n--) {
        int l, r;
        cin >> l >> r;
        try {
            for (int i = l; i <= r; ++i) {
                ans[i] = 1;
            }
        }
        catch (...) {}
    }
    int c = count(ans.begin()+1, ans.end(), 0);
    cout << c << endl;
    if (c) {
        for (int i = 1; i <= m; ++i) {
            if (!ans[i]) {
                cout << i << ' ';
            }
        }
    }
 
}
