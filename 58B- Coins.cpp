#include <iostream>
using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    int i=0;
    for (;a<=b;a*=3,b*=2,i++);
    cout<<i;
    return 0;
}
