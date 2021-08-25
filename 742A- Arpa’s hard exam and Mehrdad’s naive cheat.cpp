#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
void other(int n){
    short num=1;
    for(int i=0; i<n; i++){
        num = (num*1378)%10;
        cout<<num%10<<' ';
    }
    cout<<num%10;
}
 
int main() {
    int n,num[]={8,4,2,6};
    cin>>n;
    if (n == 0)
        cout<<1;
    else {
        if (n < 4)
            cout << num[n - 1];
        else
            cout << num[(n - 1) % 4];
    }   
    // other(n);
}
