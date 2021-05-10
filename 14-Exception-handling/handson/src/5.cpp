#include<iostream>
using namespace std;

class String{
    char A[10];
    public:
        char operator[](int i){
            if(i<10){
                return A[i];
            }
            throw "Array index out of bound";
        }
        String(char* a){
            int i=0;
            while(*a!='\0'){
                A[i]=*a;
                i++;
                a++;
            }
        }
        void Display(){
            cout<<A<<endl;
        }
};


int main(){
    String sc("Hello Worl");
    sc.Display();
    try{
        cout<<sc[0];
        cout<<sc[13];
    }catch(const char* msg){
        cout<<msg;
    }
}