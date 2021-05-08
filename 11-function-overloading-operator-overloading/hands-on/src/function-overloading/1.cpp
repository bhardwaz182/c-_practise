#include<iostream>
using namespace std;
void swap(float *a,float *b){
    float temp=*a;
    *a=*b;
    *b=temp;
}
void swap(double *a,double *b){
    double temp=*a;
    *a=*b;
    *b=temp;
}
void swap(long int *a,long int *b){
    long int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    float a=3.1,b=4.3;
    cout<<a<<"\n"<<b<<endl;
    swap(a,b);
    cout<<a<<'\n'<<b<<endl;
}