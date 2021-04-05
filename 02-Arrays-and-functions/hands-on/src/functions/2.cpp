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
    cout<<"Enter a positive integer: ";
    int num;
    cin>>num;
    //int half=num/2;
    cout<<"Expected output\n";
    for(int i=2;i<=num/2;i++){
        if(checkPrime(i)&&checkPrime(num-i)){
            cout<<num<<" = "<<i<<" + "<<num-i<<endl;
        }
    }
    return 0;
}