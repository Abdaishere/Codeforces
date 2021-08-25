#include <iostream>
using namespace std;
 
char n[101][101],w[101];
int main()
{
    int N; bool flag= false;
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>w;
        for (int j=0; w[j]; j++)
        {
            n[i][j]=w[j];
        }
    }
    int c=0;
    for (int i=0; i<N; i++)
    {
        for (int j=0; n[i][j]!=0; j++)
        {
            if(j>9) flag= true;
            c=j;
        }
        if(flag)
        {
            cout<<n[i][0]<<(c-1)<<n[i][c]<<endl;
            flag= false;
        }
        else cout<<n[i]<<endl;
    }
    return 0;
}
