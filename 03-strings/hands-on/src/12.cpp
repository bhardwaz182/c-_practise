#include<iostream>
using namespace std;
int main(int argv,char* argc[]){
    if(argv!=5){
        cout<<"Invalid number of parameters please try again";
    }else{
        for(int i=0;i<4;i++){
            cout<<argc[i+1]<<" ";
        }
    }
    return 0;
}