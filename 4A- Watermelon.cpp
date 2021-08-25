#include <iostream>
using namespace std;
int main()
{
    int w; bool flag= false;
    cin>>w;
    for (int i=2; i<w; i+=2)
    {
        if ((w-i)%2==0)
        {flag = true; break;}
    }
    if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
