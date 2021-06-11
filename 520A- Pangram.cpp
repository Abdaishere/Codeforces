#include <iostream>
 
using namespace std;
 
string key ="qwertyuiopasdfghjkl;zxcvbnm,./";
 
int main(){
    char c;
    cin>>c;
    string word;
    cin>>word;
    for(int i=0; i<word.length(); i++)
        for(int j=0; j<key.length();j++){
            if (word[i]==key[j]) {
                word[i] = (c == 'R' ? key[j - 1] : key[j + 1]);
                break;
            }
        }
    cout<<word;
}
