#include <iostream>
using namespace std;
int n,nums[10000000];
bool print;
int main()
{
    cin>>n;
    nums[0]=n;
    cout<< n << " ";
    int j=0;
    if (n!=1)
    {
        for (int i = n - 1; i != 1; i--) {
            if (nums[j] % i == 0) {
                j++;
                nums[j] = i;
                cout << nums[j] << " ";
            }
        }
        cout<<1;
    }
    return 0;
}
