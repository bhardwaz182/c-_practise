#include<iostream>
#include<sstream>
using namespace std;

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(int argv,char* argc[]){
    stringstream conv1{argc[1]};
    stringstream conv2{argc[2]};
    int a{},b{};
    conv1>>a;
    conv2>>b;
    cout<<"a : "<<a;
    cout<<" b : "<<b;
    swap(&a,&b);
    cout<<"\nAfter swapping \n";
    cout<<"a : "<<a;
    cout<<" b : "<<b;
    return 0;
}