#include<iostream>
using namespace std;

class Sample{
    private:
        int x;
        double y;
    public:
        Sample(){
            x=0;
            y=0;
            cout<<x<<" "<<y<<endl;
        }
        Sample(int a){
            x=a;
            y=a;
            cout<<x<<" "<<y<<endl;
        }
        Sample(int a,int b){
            x=a;
            y=b;
            cout<<x<<" "<<y<<"int"<<endl;
        }
        Sample(int a,double b){
            x=a;
            y=b;
            cout<<x<<" "<<y<<"double";
        }
};

int main(){
    Sample s;
    Sample s1(4),s2(4,6),s3(5,6.7);
    return 0;
}