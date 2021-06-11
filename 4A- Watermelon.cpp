#include <iostream>
using namespace std;
 
int main()
{
    int w; bool flag= false;
    cin>>w;
    for (int i=1; i<w; i++)
    {
        if (i%2==0 && (w-i)%2==0)
        {flag = true; break;}
    }
    if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
