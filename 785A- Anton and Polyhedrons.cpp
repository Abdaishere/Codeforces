#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
string shape[]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
int faces[]={4,6,8,12,20};
 
int sum,n;
int main() {
    cin>>n;
    for(int i=0; i<n; ++i){
        string x;
        cin>>x;
        for(int j=0; j<5; ++j)
            if (x == shape[j])
                sum += faces[j];
    }
    cout<<sum;
}
