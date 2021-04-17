#include<iostream>

#define SWAP(a,b) {a=a+b;b=a-b;a=a-b;}

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of 1st variable\n";
    cin>>a;
    cout<<"Enter the value of 2nd variable\n";
    cin>>b;
    cout<<"Before swapping \na="<<a<<", b="<<b;
    SWAP(a,b);
    cout<<"\nAfter swapping \na="<<a<<", b="<<b;
    return 0;
}