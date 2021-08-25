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
    string a,b;
    cin>>a>>b;
    if (a == b)
        cout<<-1;
    else
        cout<<max(a.length(),b.length());
}
