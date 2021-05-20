#include<iostream>
using namespace std;

class Bitset{
    int *ptr;
    int size;
    public:
        Bitset(int n){
            size=n;
            ptr=new int[n];
            for(int i=0;i<n;i++){
                ptr[i]=0;
            }
        }
        void setbit(int idx){
            ptr[size-1-idx]=1;
        }
        void setbit(int idx,int val){
            ptr[size-1-idx]=val;
        }
        void cleatbit(int idx){
            ptr[size-1-idx]=0;
        }
        void togglebit(int idx){
            if(ptr[size-1-idx]){
                ptr[size-1-idx]=0;
            }else{
                ptr[size-1-idx]=1;
            }
        }
        int getbit(int idx){
            return ptr[size-1-idx];
        }
        void print(){
            for(int i=0;i<size;i++){
                cout<<ptr[i];
            }
            cout<<endl;
        }
};

int main(){
    Bitset b(4);
    b.print();
    b.setbit(0);
    b.setbit(3);
    b.print();
    b.togglebit(2);
    b.print();
    return 0;
}