#include<iostream>

using namespace std;
#define ODD_EVEN(a) a%2

int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if(ODD_EVEN(n)){
        cout<<"The given number is odd";
    }else{
        cout<<"The given number is even";
    }
    return 0;
}