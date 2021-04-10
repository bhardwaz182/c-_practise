#include<iostream>

using namespace std;

struct DATA
{
    int num1;
    int num2;
    int num3;
    int average;
};

struct DATA* average(struct DATA *d1){
    d1->average=(d1->num1+d1->num2+d1->num3)/3;
    return d1;
}


int main(){

    struct DATA d;
    d.num1=4;
    d.num2=4;
    d.num3=4;

    struct DATA* d1=average(&d);
    cout<<d1->average;
    return 0;
}