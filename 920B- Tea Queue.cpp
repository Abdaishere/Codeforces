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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i = 1;
        for(int j=1; j<=n; ++j){
            int l,r;
            cin>>l>>r;
            if (l > i){
                i = l;
            }
            if (r < i){
                cout<<0<<' ';
                --j;
                --i;
                n--;
            }else
                cout<<i<<' ';
            ++i;
        }
        cout<<endl;
    }
}
