#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
 
#define EPS 1e-9
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
bool check(int a,int b,int c,int d) {
    int arr[10];
    for (auto &i: arr)
        i = 0;
    if(a<1 || a>9 || b<1 || b>9 || c<1 || c>9 || d<1 || d>9)
        return true;
        arr[a]++;
        arr[b]++;
        arr[c]++;
        arr[d]++;
    for (auto i:arr)
        if (i > 1)
            return true;
    return false;
}
int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int A = 0, B = 0, C = 0, D = 0;
    while ((A != 10)) {
        A++;
        B = r1 - A;
        C = c1 - A;
        D = r2 - C;
        if ((d1 == A + D && d2 == B + C && r1 == A + B && r2 == C + D && c1 == A + C && c2 == B + D))
            break;
    }
    if ((A > 9) || check(A, B, C, D))
        cout << -1;
    else
        cout << A << ' ' << B << endl << C << ' ' << D;
}
