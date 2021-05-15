#include<iostream>
using namespace std;

template <class t>

class Vector{
    t A[10];
    public:
        Vector(){

        }
        Vector(t* a){
            for(int i=0;i<10;i++){
                A[i]=a[i];
            }
        }
        t sum(){
            t s=0;
            for(int i=0;i<10;i++){
                s+=A[i];
            }
            return s;
        }
        t max(){
            t ma=A[0];
            for(int i=1;i<10;i++){
                if(A[i]>ma){
                    ma=A[i];
                }
            }
            return ma;
        }
        t min(){
            t mi=A[0];
            for(int i=1;i<10;i++){
                if(A[i]<mi){
                    mi=A[i];
                }
            }
            return mi;
        }

        void sort(){
            for(int i=0;i<10;i++){
                for(int j=0;j<10-i-1;j++){
                    if(A[j]>A[j+1]){
                        t temp=A[j];
                        A[j]=A[j+1];
                        A[j+1]=temp;
                    }
                }
                
            }
        }
        ~Vector(){
            for(int i=0;i<10;i++){
                cout<<A[i]<<" ";
            }
            //cout<<"This is in deconstructor";
        }

};

int main(){
    int A[10]={10,9,8,7,6,5,4,3,2,1};
    Vector<int> in(A);
    cout<<"sum "<<in.sum()<<"\n";
    cout<<"max "<<in.max()<<"\n";
    cout<<"min "<<in.min()<<"\n";
    in.sort();

    float B[10]={10.1,9.1,8.1,7.1,6.1,5.1,4.1,3.1,2.1,1.1};
    Vector<float> fl(B);
    cout<<"sum"<<fl.sum()<<"\n";
    cout<<"max"<<fl.max()<<"\n";
    cout<<"min"<<fl.min()<<"\n";
    fl.sort();
}