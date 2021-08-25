#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
//You're gonna die one day
 
using namespace std;
map<int,vector<int>> a;
map<int, int> ans;
int c;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        a[x].push_back(i);
    }
    for(auto &i: a){
        bool flag= 1;
        if(i.second.size() == 1){
            ans[i.first] = 0;
            c++;
        } else {
            int x = i.second[1] - i.second[0];
            for (int j = 0; j < i.second.size() - 1; j++) {
                if (i.second[j + 1] - i.second[j] != x) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                ans[i.first] = x;
                c++;
            }
        }
    }
    cout<<c<<'\n';
    for(auto &i: ans){
        cout<<i.first<<' '<<i.second<<'\n';
    }
}
