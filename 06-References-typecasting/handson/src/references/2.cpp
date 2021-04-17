#include<iostream>

using namespace std;

void myswap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int i,j;
    cout<<"Enter two numbers : ";
    cin>>i>>j;
    system("clear");
    cout<<"\nBefore swapping : \n";
    cout<<"i :"<<i<<"\t"<<"j :"<<j<<endl;
    myswap(i,j);

    cout<<"\nAfter swapping : \n";
    cout<<"i :"<<i<<"\t"<<"j :"<<j<<endl;
    return 0;
}