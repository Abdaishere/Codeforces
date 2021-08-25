#include <iostream>
using namespace  std;
 
int teams[30][2],n,chang;
 
int main()
{
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>teams[i][0]>>teams[i][1];
 
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (teams[i][0]==teams[j][1] && j!=i)
            {
                chang++;
            }
        }
    }
    cout<<chang;
    return 0;
}
