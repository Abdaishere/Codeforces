#include <iostream>
using namespace std;
int n;
char s[51];
int main()
{
    cin>>n>>s;
    int changes=0;
    for (int i=0; i<=n; i++)
    {
        for (int j=i; s[j]; j++)
        {
            i=j;
            if (s[j]==s[j+1])
            {
                changes++;
            }
            else break;
        }
    }
    cout<<changes;
    return 0;
}
