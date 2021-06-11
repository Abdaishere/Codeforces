#include <iostream>
using namespace std;
int n,a,b,c,x,y,z;
 
int main()
{
    cin>>n;
    for (int i=0;i<n; i++)
    {
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if (a || b || c)
        cout<<"NO";
    else cout<<"YES";
    return 0;
}
