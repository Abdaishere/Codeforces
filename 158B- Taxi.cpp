#include <iostream>
using namespace std;
int n,num[5]={0,0,0,0,0},a,taxi;
 
int main()
{
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a;
        ++num[a];
        if (a==4)
            taxi++;
    }
 
    if (num[3] && num[1])
    {
        for (int i=0; num[3]; i++)
        {
            if (num[1]==0)
                break;
            num[1]--;
            num[3]--;
            taxi++;
        }
    }
 
    if (num[2] > 2)
    {
        for (int i=0; num[2]; i++)
        {
            if (num[2]==1)
                break;
            num[2]--;
            num[2]--;
            taxi++;
        }
    }
 
 
    if (num[1] > 3)
    {
        for (int i=0; num[1]; i++)
        {
            if (num[1]<=3)
                break;
            else
                {
                num[1] -= 4;
                taxi++;
            }
        }
    }
 
    if (num[2] && num[1])
    {
        for (int i=0; num[2]; i++)
        {
            if (num[1]==0)
                break;
            num[1]--;
            num[2]--;
            num[3]++;
        }
    }
 
    if (num[3] && num[1])
    {
        for (int i=0; num[3]; i++)
        {
            if (num[1]==0)
                break;
            num[1]--;
            num[3]--;
            taxi++;
        }
    }
 
    if (num[1] || num[2] || num[3])
    {
        int count=0;
        if (num[3] && !num[1])
        {
            for (; num[3]; taxi++,num[3]--);
        }
        if (num[1])
        {
            for (; num[1]; count++,num[1]--);
        }
        if (num[2])
        {
            for (; num[2]; count+=2,num[2]--);
        }
        if (num[3])
        {
            for (; num[3]; count+=3,num[3]--);
        }
        if (count%4==0) taxi+=(count/4);
        else if (count%4!=0 && count>4) taxi+=((count/4)+1);
        else if (count<4) taxi++;
    }
    cout<<taxi;
    return 0;
}
