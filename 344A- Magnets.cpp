#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
 
int main(){
    int n,x1=0,x,count=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x != x1) {
            count++;
        }
        x1 = x;
    }
    cout<<count;
}
