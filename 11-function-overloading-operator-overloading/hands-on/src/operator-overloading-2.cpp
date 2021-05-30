#include<iostream>
using namespace std;

class Date{
    int day,mth,year;
    public:
        Date():day(0),mth(0),year(0){}
        Date(int d,int m,int y):day(d),mth(m),year(y){}

        void print(){
            cout<<day<<mth<<year<<endl;
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

        Date operator++(){
            Date d1;
            d1.day=this->day++;
            d1.mth=this->mth;
            d1.year=this->year;
            return d1;
        }
        Date operator--(){
            Date d1;
            d1.day=this->day--;
            d1.mth=this->mth;
            d1.year=this->year;
            return d1;
        }
};

int main(){
    Date date(1,2,3),d3,d4;
    Date ne=date+4;
    ne.print();
    ne=ne-4;
    ne.print();
    d3=++date;
    d3.print();
    d4=--date;
    d4.print();
    
}