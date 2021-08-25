#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
 
int main(){
    int n,num,sum=0,count=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> num;
        num > 0 ? (sum += num) : sum > 0 ? (sum--) : (count++);
    }
    cout<<count;
}
