#include <iostream>
#include<cstring>
using namespace std;
int gcd(int a, int b){
    if (a==0)
        return b;
    return gcd(b%a,a);
}
char w;
int main(){
    int heap,n1,n2;
    cin>>n1>>n2>>heap;
    heap-=gcd(heap,n1);
    while (heap > 0){
        heap-=gcd(heap,n2);
        heap-=gcd(heap,n1);
    }
    if (heap < 0)
        cout<<1;
    else
        cout<<0;
    return 0;
}
