#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n,count=0;
    cin>>n;
 
    vector<string> teams(n);
    string x;
    vector<int> q(n,0);
 
    for(int i=0; i<n; i++) {
        cin >> x;
        bool flag = 0;
        for (int i = 0; i <= count; i++) {
            if (teams[i]==x) {
                q[i]++;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            teams[count] = x;
            q[count]=1;
            count++;
        }
    }
 
    int max[]={-1,-1};
    for(int i=0; i<n; i++) {
        if (max[0] < q[i]) {
            max[0] = q[i];
            max[1] = i;
        }
    }
 
    cout<<teams[max[1]];
}
