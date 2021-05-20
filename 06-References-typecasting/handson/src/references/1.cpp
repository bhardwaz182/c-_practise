#include<iostream>
#include<sstream>
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

int main(int argc,char *argv[]){
    stringstream convert{ argv[1] };
    int n{},fac;
    convert>>n;
    fac=fact(n);
    
    if(fac){
        cout<<fac;
    }
    else{
        cout<<"invalid input";
    }

    return 0;
}