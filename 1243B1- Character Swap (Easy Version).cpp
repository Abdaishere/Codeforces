#include <iostream>
using namespace std;
 
int k,n,c,d;
char s[10001],t[10001],new_s[10001],new_t[10001];
 
int main()
{
    cin>>k;
    for (int h=0; h<k; h++)
    {
        cin>>n;
        cin>>s;
        cin>>t;
        c=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]==t[i])
            {
                s[i]=0;
                t[i]=0;
            }
            else
            {
                new_s[c]=s[i],new_t[c]=t[i];
                c++;
            }
        }
        if (c==2 && new_s[0]==new_s[1] && new_t[0]==new_t[1])
        {
            cout<<"Yes"<<endl;
        }
        else
            {
            cout << "No" << endl;
            continue;
        }
    }
    return 0;
}
