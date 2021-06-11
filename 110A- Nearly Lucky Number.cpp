#include <iostream>
 
using namespace std;
int arr[10];
 
int main(){
    string s,t;
    cin>>s>>t;
    if (s.length() != t.length()) {
        cout << "NO";
        return 0;
    }
    else
        for (int i=0; i<s.length(); i++){
            if (s[i]!= t[s.length()-1-i]) {
                cout << "NO";
                return 0;
            }
        }
        cout<<"YES";
}
