#include<iostream>

using namespace std;

class Int{
    int a;
    public:
        Int():a(0){}
        Int(int n):a(n){}
        Int(const Int &n){
            this->a=n.a;
        }

        Int operator++(){
            Int temp;
            //cout<<"++";
            temp.a=++a;
            return temp;
        }

        Int operator++(int){
            Int temp;
            temp.a=a++;
            return temp;
        }

        Int operator+=(Int n){
            Int temp;
            temp.a=this->a+n.a;
            return temp;
        }

        Int operator-=(Int n){
            Int temp;
            temp.a=this->a-n.a;
            return temp;
        }

        Int operator+(Int n){
            Int temp;
            temp.a=this->a+n.a;
            return temp;
        }

        friend Int operator+(const Int &D,int b){
            Int temp;
            temp.a=D.a+b;
            return temp;
        }

        friend Int operator-(const Int &D,int b);
        Int operator-(Int n){
            Int temp;
            temp.a=this->a-n.a;
            return temp;
        }

        friend ostream &operator<<( ostream &output, const Int &D ) { 
         output << D.a;
         return output;            
      }
};

Int operator-(const Int &D,int b){
    Int temp;
    temp.a=D.a-b;
    return temp;
}

int main(){
    Int a(3);
    Int b(a);
    Int c;
    b=c=a;
    cout<<a<<" "<<b<<" "<<c<<endl;
    b=++a;
    c=a++;
    cout<<b<<" "<<c<<endl;
    Int a1(3),b1(5),c1(7);
    c1+=a1;
    b1-=c1;
    cout<<c1<<" "<<b1<<endl;
    Int a2(3),b2(5),c2(7);
    Int d;
    d=a2+b2-c2;
    cout<<d<<endl;

}