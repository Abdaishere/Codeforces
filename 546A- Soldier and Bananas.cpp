#include <iostream>
using namespace std;
int k,n,w;
int main()
{
    cin>>k>>n>>w;
    int cost=0;
    for (int i=1; i<=w; i++)
        cost+=i*k;
    cost=cost-n;
    if (cost<=0) cout<<0;
    else cout<<cost;
    return 0;
}
