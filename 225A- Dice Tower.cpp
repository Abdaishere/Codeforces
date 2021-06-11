#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
//You're gonna die one day
 
using namespace std;
 
 
int main(){
    int n,x,a,b;
    cin>>n>>x;
    while(n--){
        cin>>a>>b;
        if (x == a || x == b || x == 7-a || x == 7-b){
            cout<<"NO";
            return 0;
        }
        x=7-x;
    }
    cout<<"YES";
}
