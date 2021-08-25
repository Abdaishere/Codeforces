#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
 
int main(){
    int n,*arr;
    cin>>n;
    arr = new int [n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<bool> vis(n+1);
 
    int x=n;
    for(int i=0; i < x; i++) {
        vis[arr[i]] = 1;
        if (arr[i] == n) {
            for (; n >= 0 && vis[n] == 1; --n) {
                cout << n << ' ';
            }
            
        }
        cout << endl;
    }
 
}
