#include <iostream>
using namespace std;
 
long long s;
int main()
{
    double max=0.0;
    cin>>s;
    for (long long t=1; t<=s; t++)
    {
        max+=(double)1/t;
    }
    cout<<max;
    return 0;
}
