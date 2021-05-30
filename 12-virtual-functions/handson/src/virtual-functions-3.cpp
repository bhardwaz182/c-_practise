#include<iostream>

using namespace std;

class Shape{
    public:
        int length,height;
        Shape(int a=0,int b=0):length(a),height(b){}
        virtual int area()=0;
        virtual int perimeter()=0;
};

class Square:public Shape{
    public:
        Square(int s=0):Shape(s){}
        int area(){
            return length*length;
        }
        int perimeter(){
            return 4*length;
        }
};

class Rectangle:public Shape{
    public:
        Rectangle(int l=0,int b=0):Shape(l,b){}
        int area(){
            return length*height;
        }
        int perimeter(){
            return 2*(length+height);
        }
};

class Circle:public Shape{
    public:
        Circle(int s=0):Shape(s){}
        int area(){
            return 3.24*length*length;
        }
        int perimeter(){
            return 2*3.14*length;
        }
};

int main(){
    Shape *sh;
    Square sq(4);
    sh=&sq;
    cout<<"Area of square:"<<sh->area()<<" Perimeter of square:"<<sh->perimeter()<<endl;

    Rectangle rec(4,3);
    sh=&rec;
    cout<<"Area of Rectangle:"<<sh->area()<<" Perimeter of Rectangle:"<<sh->perimeter()<<endl;

    Circle cir(7);
    sh=&cir;
    cout<<"Area of Circle:"<<sh->area()<<" Perimeter of Circle:"<<sh->perimeter()<<endl;
}