#include<iostream>
using namespace std;

class Vector {
    int A[10];
    public:
        Vector operator/( Vector v ){
            int* b= this->A;
            Vector vc;
            int* newV=vc.A;
            int* a=v.A;
            for(int i=0;i<10;i++){
                if(*a==0){
                    throw "Division with zero";
                }
                *newV=*b/(*a);
                newV++;
                b++;
                a++;
            }
            return vc;
        }
        Vector (){
            for(int i=0;i<10;i++){
                A[i]=0;
            }
        }
        Vector ( int* k ){
            for(int i=0;i<10;i++){
                A[i]=*k;
                k++;
            }
        }
        void Display ( ){
            for(int i=0;i<10;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    int arr1[10]={0,2,3,4,5,6,7,8,9,10};
    int arr2[10]={1,4,9,16,25,36,49,64,81,100};
    Vector fir(arr1);
    Vector sec(arr2);
    fir.Display();
    sec.Display();
    try{
        Vector res=sec/fir;
        res.Display();
    }catch(const char* msg){
        cout<<msg;
    }
    
}