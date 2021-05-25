#include<iostream>

using namespace std;

class A{
    public:
        void display(){
            cout<<"A::display";
        }
};

class D : public A{
    public:
        void display(){
            A::display();
            cout<<"D::display";
        }
};

int main(){
    D d;
    d.display();
    return 0;
}