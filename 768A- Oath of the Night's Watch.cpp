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
    int *has=new int [n];
    for (int i=0; i<n;i++) {
        cin >> has[i];
    }
    int count =0;
    sort(has,has + n);
    for (int i=0; i<n;i++){
        if (has[i]!=has[0] && has[i]!=has[n-1])
            count++;
    }
    cout<<count;
}
