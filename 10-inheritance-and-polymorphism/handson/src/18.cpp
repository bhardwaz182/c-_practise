#include<iostream>

using namespace std;

class Shape{
    public:
        void calculateArea();
};
class Rectangle : public Shape{
    public:
        void calculateArea(int l,int b){
            cout<<"Rectangle area is"<<l*b;
        }
};
class Square : public Shape{
    public:
        void calculateArea(int s){
            cout<<"Square area is"<<s*s;
        }
};
class Circle : public Shape{
    public:
        void calculateArea(int r){
            cout<<"Circle area is"<<3.14*r*r;
        }
};
int main(){
    Rectangle rect;
    Square sq;
    Circle ci;
    rect.calculateArea(2,3);
    sq.calculateArea(5);
    ci.calculateArea(7);
    return 0;
}