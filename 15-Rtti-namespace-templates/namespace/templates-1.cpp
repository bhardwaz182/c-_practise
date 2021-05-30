#include<iostream>
using namespace std;

template <class t>
void swap(t* a,t* b){
    t temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
    int a=1,b=2;
    cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"After swap a: "<<a<<" b: "<<b<<endl;
    float a1=1.1,b1=2.2;
    cout<<"Before swap a1: "<<a1<<" b1: "<<b1<<endl;
    swap(a1,b1);
    cout<<"After swap a1: "<<a1<<" b1: "<<b1<<endl;
    char a2='c',b2='d';
    cout<<"Before swap a2: "<<a2<<" b2: "<<b2<<endl;
    swap(a2,b2);
    cout<<"After swap a2: "<<a2<<" b2: "<<b2<<endl;
}