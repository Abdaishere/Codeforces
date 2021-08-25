#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>
 
using namespace std;
 
 
 
int main() {
    int n,x;
    cin>>n;
    vector<int> arr(n);
 
    for(int i=0; i<n; i++){
        cin>>x;
        arr[x-1]=i+1;
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
}
