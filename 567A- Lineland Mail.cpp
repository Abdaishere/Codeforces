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
 
int max(int i,int j){
    return i > j? i:j;
}
 
int main() {
    int n,x,*arr;
    cin>>n;
    arr = new int [n];
 
    for(int i=0; i<n; i++)
        cin >> arr[i];
 
    for(int i=0; i<n; i++){
        if (i != 0 && i != n-1)
            cout<<min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]))<<' ';
        else if (i == n-1)
            cout<<abs(arr[i]-arr[i-1])<<' ';
        else
            cout<<abs(arr[i]-arr[i+1])<<' ';
 
        cout<<max(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[0]))<<'\n';
    }
}
