#include<iostream>
using namespace std;

class Vector{
    int A[10];
    public:
        Vector(int* a){
            for(int i=0;i<10;i++){
                A[i]=*a;
                a++;
            }
        }
        int operator[](int k){
            return A[k];
        }
        int operator[](double k){
            throw "float is not suitable data type";
            return 0;
        }
        int operator[](char c){
            throw "charecter is not suitable data type";
            return 0;
        }
        void Display(){
            for(int i=0;i<10;i++){
                cout<<A[i]<<" ";
            }
        }
};

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    Vector vs(a);
    try{
        cout<<vs[0];
        cout<<vs[5.1];
    }catch(const char* msg){
        cout<<msg;
    }

    try{
        // cout<<vs[0];
        cout<<vs['a'];
    }catch(const char* msg){
        cout<<msg;
    }
}