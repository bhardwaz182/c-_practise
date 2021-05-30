#include<iostream>
using namespace std;

int main(){
    int A[10];
    int* ptr=A;
    for(int i=0;i<10;i++){
        cin>>*(ptr+i);
    }
    for(int i=9;i>=0;i--){
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}