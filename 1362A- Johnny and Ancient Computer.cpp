#include <iostream>
using namespace std;
 
long long a,b,t,c;
int main()
{
    cin>>t;
    for (int i=0; i<t; i++,c=0)
    {
        cin >> a >> b;
        while (a!=b)
        {
            if ( a < b )
            {
                if (a*8 <= b)
                {
                    a*=8;
                    c++;
                }
                else if (a*4 <= b)
                {
                    a*=4;
                    c++;
                }
                else if (a*2 <= b)
                {
                    a*=2;
                    c++;
                }
                else
                    {
                    c=-1;
                    break;
                }
            }
            else if ( a > b )
            {
                if (a/8 >= b && a%8==0)
                {
                    a/=8;
                    c++;
                    //cout<<"1";
                }
                else if (a/4 >= b && a%4==0)
                {
                    a/=4;
                    c++;
                    //cout<<"2";
                }
                else if (a/2 >= b && a%2==0)
                {
                    a/=2;
                    c++;
                    //cout<<"3";
                }
                else
                {
                    c=-1;
                    break;
                }
            }
            // cout<<a<<' '<<b<<endl;
        }
        cout<<c<<endl;
    }
    return 0;
}
