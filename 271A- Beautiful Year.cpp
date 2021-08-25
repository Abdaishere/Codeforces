#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
bool isequal(int x){
    string year=to_string(x);
    vector<int> num(10,0);
    for(int i=0; i<4;i++)
        num[year[i]-'0']++;
 
    for(int i=0; i<=9; i++) {
        if (num[i] > 1) {
            return true;
        }
    }
    return false;
}
 
int main(){
    int x;
    cin>>x;
    x++;
    while (isequal(x))
        x++;
    cout<<x;
}
