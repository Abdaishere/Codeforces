#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
long long int l,r;
 
 
int main() {
    cin>>l>>r;
    while (true) {
        if (l % 2 != 0)
            l++;
        if (l + 2 > r) {
            cout << -1;
            return 0;
        } else {
            cout << l << ' ' << l + 1 << ' ' << l + 2;
            return 0;
        }
    }
    return 0;
}
