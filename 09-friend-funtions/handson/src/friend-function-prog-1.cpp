#include<iostream>
using namespace std;

class Date{
    int d,m,y;
    public:
        Date():d(0),m(0),y(0){}
        Date(int day,int mnt,int yea):d(day),m(mnt),y(yea){}
        Date operator+(int n){
            Date temp;
            temp.d=this->d+n;
            return temp;
        }
};

int main(){
    Date d1(1,2,3),d2;
    d2=d1+1;
    return 0;
}