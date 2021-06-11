#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
 
int main() {
    int n,m,x,y;
    cin>>n;
    vector<int> line(n);
    for (int i=0; i<n; i++)
        cin>>line[i];
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        x--;
        if(x == n-1){
            line[x - 1] += y - 1;
            line[x] = 0;
        }else if (x==0){
            line[x + 1] += line[x] - y;
            line[x] = 0;
        }else {
            line[x - 1] += y - 1;
            line[x + 1] += line[x] - y;
            line[x] = 0;
        }
    }
    for (int i=0; i<n; i++)
        cout<<line[i]<<'\n';
}
