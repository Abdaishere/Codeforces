#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    string word;
    cin>>word;
    int small=0,cap=0;
    for (int i=0; word[i]; i++)
        if (word[i] >= 65 && word[i] <= 90)
            cap++;
        else
            small++;
    if (cap > small)
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    else
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout<<word;
}
