#include <iostream>
 
using namespace std;
int arr[10];
 
int main(){
    string num;
    cin>>num;
    for(int i=0; i< num.length(); i++)
        arr[(int)(num[i])-48]++;
    int sum = arr[7]+arr[4];
    if (sum == 4 || sum==7)
        cout<<"YES";
    else
        cout<<"NO";
}
