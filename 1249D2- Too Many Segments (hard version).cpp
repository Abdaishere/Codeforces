#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
 
const int N=2e5+5, M=17+5, MOD=998244353, OO=0x3f3f3f3f;
const long double ESP=1e-8;
 
int n,k,mx;
int st[N],en[N], cum[N], update[N];
vector<int>segSt[N],segEn[N];
 
 
int main()
{
    FIO
//    freopen("mahdi.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int l,r;
        cin>>l>>r;
        mx=max(mx,r);
        cum[l]++;
        cum[r+1]--;
        st[i]=l;
        en[i]=r;
        segSt[l].push_back(i);
        segEn[r+1].push_back(i);
    }
    int deleted=0;
    set<pair<int,int>>curr;
    vector<int>res;
    for(int i=1; i<=mx+1; i++){
        cum[i]+=cum[i-1];
        deleted+=update[i];
        for(int seg : segSt[i]){
            curr.emplace(en[seg],seg);
        }
        for(int seg : segEn[i]){
            curr.erase({en[seg],seg});
        }
        while(cum[i]-deleted>k){
            int seg=curr.rbegin()->second;
            curr.erase(--curr.end());
            deleted++;
            update[en[seg]+1]--;
            res.push_back(seg+1);
        }
    }
    cout<<res.size()<<'\n';
    for(int x : res ) cout<<x<<' ';
    cout<<'\n';
 
    return 0;
}
