#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n){
    if(n==2 || n==3){
        return true;
    }

    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"Enter two positive numbers\n";
    int low,up;
    cin>>low>>up;
    for(int i=low;i<up;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}