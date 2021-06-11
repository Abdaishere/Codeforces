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
    int n,k;
    char p='a';
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cout<<p;
        p +=1;
        if (p-'a'==k)
            p='a';
    }
}
