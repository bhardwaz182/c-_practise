#include<iostream>
#include<sstream>

using namespace std;

int sumOfSquares(int n){
    int s=0;
    while(n){
        int rem=n%10;
        s+=rem*rem;
        n=n/10;
    }
    return s;
}

int main(int argc,char* arg[]){
    int n{};
    stringstream convert{ arg[1] };
    convert >> n;
    n=n*n;
    while(n>=10){
        n=sumOfSquares(n);
    }
    if(n==1){
        cout<<"Happy number";
    }else{
        cout<<"Unhappy number";
    }
}