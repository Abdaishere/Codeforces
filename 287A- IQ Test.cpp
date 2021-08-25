#include <iostream>
 
using namespace std;
 
int main(){
    int count=0;
    string arr[4];
    for(int i=0; i<4; i++)
        cin>>arr[i];
    for(int j=0; j<3;j++) {
        for (int i = 0; i < 3; i++) {
            count=0;
            if (arr[j][i] == arr[j][i + 1])
                count++;
            if (arr[j][i] == arr[j + 1][i])
                count++;
            if (arr[j][i] == arr[j + 1][i + 1])
                count++;
            if (count >= 2) {
                cout << "YES";
                return 0;
            }
            count = 0;
            if (arr[j][i+1] == arr[j+1][i+1])
                count++;
            if (arr[j][i+1] == arr[j + 1][i])
                count++;
            if (arr[j][i+1] == arr[j][i])
                count++;
            if (count >= 2) {
                cout << "YES";
                return 0;
            }
            count = 0;
            if (arr[j+1][i+1] == arr[j][i+1])
                count++;
            if (arr[j+1][i+1] == arr[j + 1][i])
                count++;
            if (arr[j+1][i+1] == arr[j][i])
                count++;
            if (count >= 2) {
                cout << "YES";
                return 0;
            }
            count = 0;
            if (arr[j+1][i] == arr[j+1][i+1])
                count++;
            if (arr[j+1][i] == arr[j][i+1])
                count++;
            if (arr[j+1][i] == arr[j][i])
                count++;
            if (count >= 2) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
