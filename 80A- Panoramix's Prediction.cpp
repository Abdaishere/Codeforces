#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
 
 
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=n+1; i<m; ++i){
        bool isprime = 1;
        for(int j=2; j<i; ++j){
            if (i%j==0) {
                isprime = 0;
                break;
            }
        }
        if (isprime) {
            cout<<"NO";
            return 0;
        }
    }
    bool isprime = 1;
    for(int i=2; i<m; i++)
        if (m%i==0) {
            isprime = 0;
            break;
        }
    if (isprime) {
        cout<<"YES";
        return 0;
    }else
        cout<<"NO";
}
