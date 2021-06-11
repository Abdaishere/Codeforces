#include <iostream>
using namespace std;
int x;
 
int main()
{
    cin>>x;
    int move=0;
    for (int i=5; i!=0; i--)
    {
        move+=x/i;
        x-=(x/i)*i;
    }
    cout<<move;
    return 0;
}
