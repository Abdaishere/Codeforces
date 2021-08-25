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
    bool operator()(int &a, int &b) {
        return a > b;
    }
};
 
int main() {
    FIO
    int n;
    // freopen("out.out","w", stdout);
    // freopen("in.in","r", stdin);
    cin>>n;
    map<string, int> database;
    while(n--){
        string username;
        cin>>username;
        if (!database[username]){
            database[username] = 1;
            cout<<"OK"<<endl;
            continue;
        }
        string user;
        database[username]++;
        user = username;
        user.append(to_string(database[username]-1));
        cout<<user<<endl;
    }
}
