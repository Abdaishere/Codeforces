#include <iostream>
using namespace std;
int n,j,count,nums[100];
 
int main()
{
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    for (int i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(nums[i]==nums[j])
            {
                for (int f=j;f<n-1; f++)
                {
                    nums[f]=nums[f+1];
                }
                n--;
                count++;
                break;
            }
        }
    }
    cout<<count/2;
    return 0;
}
