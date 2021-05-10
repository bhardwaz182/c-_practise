#include<iostream>
#define size 10
using namespace std;
int main( ) 
{
    try{
        int A[size];
        for (int i=0; i<size;i++){
            if(i<0){
                throw "index is less than 0";
            }
            if(i>size){
                throw "index out of bound";
            }
            cout<<"the element at"<<i<<"is"<<A[i]<<endl;
        }
    }catch(const char* msg){
        cout<<msg<<endl;
    }
}