#include <iostream>
using namespace std;
int n,k;
int score[50];
int main()
{
    cin>>n>>k;
    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
 
    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }
 
    cout << n << endl;
    return 0;
}
