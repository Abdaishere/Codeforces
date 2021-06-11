#include <iostream>
using namespace std;
int num,lucky[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
 
int main()
{
    cin>>num;
    for (int i=0; i<14; i++)
    {
        if (num%lucky[i]==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
