#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
 
//You're gonna die one day
 
using namespace std;
 
map<long long,set<int>> record;
long long ar[160000];
int n;
 
int main() {
    cin>>n;
    for(int i=0; i<n; ++i) {
        cin>>ar[i];
        record[ar[i]].insert(i);
    }
 
 
    for(auto &i:record) {
        if (i.second.size() > 1) {
            int count = i.second.size();
            int k = 0;
            for (auto index:i.second) {
 
                if (k % 2 == 0)
                    ar[index] = 0;
                else {
                    ar[index] *= 2;
                    record[ar[index]].insert(index);
                }
                count--;
                k++;
                if (count == i.second.size() % 2)
                    break;
            }
        }
    }
 
 
    int count =0;
    for(int i=0; i<n; ++i){
        if (!ar[i])
            count++;
    }
    cout<< n - count <<endl;
    for(int i=0; i<n; ++i){
        if (ar[i])
            cout<<ar[i]<<' ';
    }
}
