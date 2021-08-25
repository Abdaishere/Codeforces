#include <iostream>
using namespace std;
int n, a, b, p;
int main()
{
    cin >> n >> a >> b;
    while (a + b >= n)
    {
        b--;
    }
    while (a + b < n - 1)
    {
        a++;
    }
    p = n - a;
    cout << p << endl;
    return 0;
}
