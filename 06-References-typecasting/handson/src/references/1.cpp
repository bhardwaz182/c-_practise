#include<iostream>

using namespace std;

int fact(int n){
    if (n<0){
        return 0;
    }
    if(n<2){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n,fac;
    cin>>n;
    fac=fact(n);
    
    if(fac){
        cout<<fac;
    }
    else{
        cout<<"invalid input";
    }

    return 0;
}