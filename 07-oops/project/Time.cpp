#include<iostream>
using namespace std;
class Time{
    int hrs,min,sec;
    public:
        Time():hrs(0),min(0),sec(0){}
        Time(int h,int m,int s){
            this->hrs=h;
            this->min=m;
            this->sec=s;
        }
        void setHour(int h){
            hrs=h;
        }
        void setMin(int m){
            min=m;
        }
        void setSec(int s){
            sec=s;
        }
        int getHour(){
            return hrs;
        }
        int getMinute(){
            return min;
        }
        int getSeconds(){
            return sec;
        }

        Time difference(Time t1){
            Time temp;
            temp.setHour(abs(this->hrs-t1.getHour()));
            temp.setMin(abs(this->min-t1.getMinute()));
            temp.setSec(abs(this->sec-t1.getSeconds()));
            return temp;
        }

        int compare(Time t1){
            if(this->hrs==t1.getHour()&&this->min==t1.getMinute()&&this->sec==t1.getSeconds()){
                return 1;
            }
            return 0;
        }
        void displayTime(){
            cout<<hrs<<" "<<min<<" "<<sec<<endl;
        }
};

int main(){
    Time t1;
    t1.setHour(10);
    t1.setMin(20);
    t1.setSec(30);
    t1.displayTime();
    Time t2(5,10,15);
    t2.displayTime();
    Time t3=t1.difference(t2);
    t3.displayTime();
    cout<<t1.compare(t2);
    return 0;
}