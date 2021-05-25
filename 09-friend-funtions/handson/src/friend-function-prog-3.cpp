#include<iostream>
using namespace std;

class XYZ{
    int a;
    public:
        XYZ(int a=10){  this->a=a;}
        friend int access(XYZ obj,int n);
};
int access(XYZ obj,int n){
            obj.a=n;
            return obj.a;
        }
int main(){
    XYZ ob(20);
    cout<<access(ob,12);
    return 0;
}