#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
//You're gonna die one day
 
using namespace std;
int a['Z'+1];
 
int main() {
    int n,k; cin>>n>>k;
    while(n--){
        char x;
        cin>>x;
        a[x]++;
    }
    unsigned long long int c=0;
    while (k!=0){
        int M= -1,ind = 0;
        for(int i='A'; i<='Z'; i++){
            if (M<a[i]){
                M=a[i];
                ind=i;
            }
        }
        if (M > k){
            c+= (unsigned long long int) k*k;
            k=0;
        }else{
            c += (unsigned long long int) a[ind]*a[ind];
            k -= a[ind];
            a[ind] =0;
        }
    }
    cout<<c;
}
 
