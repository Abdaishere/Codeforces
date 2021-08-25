#include <iostream>
using namespace std;
char n[101],word[6]="hello";
int c=0;
bool hello= false;
int main()
{
    cin>>n;
    for (int i=0; n[i]; i++)
    {
        if (n[i] == word[c])
            c++;
        else if (n[i] == n[i + 1] || (n[i] == n[i-1] && i>=1))
            continue;
        else if (n[i] != word[c] && c>0)
        {
            continue;
        }
        else c = 0;
        if (c == 5)
        {
            hello=true;
            break;
        }
    }
    if (hello) cout<<"YES";
    else cout<<"NO";
    return 0;
}
