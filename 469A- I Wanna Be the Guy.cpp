#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<bool> pass(n+1,0);
    int p,q;
    cin>>p;
    for (int i=0; i<p; i++){
        int x;
        cin>>x;
        pass[x]=true;
    }
    cin>>q;
    for (int i=0; i<q; i++){
        int x;
        cin>>x;
        pass[x]=true;
    }
    for(int i=1; i<=n; i++){
        if (pass[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
}
