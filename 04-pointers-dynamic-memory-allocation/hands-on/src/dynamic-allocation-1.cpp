#include<iostream>
using namespace std;
int main(){
    int* n=new int;
    cin>>*n;
    cout<<*n;
    delete n;
    return 0;
}