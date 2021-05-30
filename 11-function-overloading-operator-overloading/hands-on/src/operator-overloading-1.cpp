#include<iostream>
using namespace std;

class Date{
    int day,mth,year;
    public:
        Date():day(0),mth(0),year(0){}
        Date(int d,int m,int y):day(d),mth(m),year(y){}

        void print(){
            cout<<day<<mth<<year;
        }

        Date operator+(int n){
            Date dat;
            dat.day=this->day+n;
            dat.mth=this->mth;
            dat.year=this->year;
            return dat;
        }

        Date operator-(int n){
            Date dat;
            dat.day=this->day-n;
            dat.mth=this->mth;
            dat.year=this->year;
            return dat;
        }
};

int main(){
    Date date(1,2,3);
    Date ne=date+4;
    ne.print();
    ne=ne-4;
    ne.print();
}