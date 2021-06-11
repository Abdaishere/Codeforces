#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
 
int main() {
    int y,w,num;
    cin>>y>>w;
    if (y > w)
        num = y;
    else
        num = w;
    switch (num){
        case 6:cout<<1<<"/"<<6; return 0;
        case 5:cout<<1<<"/"<<3; return 0;
        case 4:cout<<1<<"/"<<2; return 0;
        case 3:cout<<2<<"/"<<3; return 0;
        case 2:cout<<5<<"/"<<6; return 0;
        case 1:cout<<1<<"/"<<1; return 0;
    }
}
