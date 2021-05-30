#include<iostream>
using namespace std;

class Date{
    int d,m,y;
    public:
        Date():d(0),m(0),y(0){}
        Date(const Date &dat){
            d=dat.d;
            m=dat.m;
            y=dat.y;
        }
};

int main(){
    Date d1;
    Date d2=d1;
    return 0;
}