#include<iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"A::display()\n";
        }
        void display(int t){
            cout<<"A::display(int "<<t<<")\n";
        }
};

class D:public A{
    public:
        void display(){
            cout<<"D:: display()\n";
        }
};

int main(){
    D d;
    d.display();
    // d.display(10);
    return 0;
}