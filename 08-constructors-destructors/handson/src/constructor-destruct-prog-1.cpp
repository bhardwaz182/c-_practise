#include<iostream>
#include<string>
using namespace std;
class Point{
    int x,y;
    public:
        Point(int x1,int y1):x(x1),y(y1){}
};

class Queue{
    int queSize;
    int* queptr;
    public:
        Queue(int n):queSize(n){
            queptr=new int[n];
        }
};

class Employee{
    string name;
    int id;
    public:
        Employee(string nam,int id1):name(nam),id(id1){}
};
int main(){
    return 0;
}