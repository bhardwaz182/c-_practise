#include<iostream>
#include<string>
using namespace std;

class String{
    string str;
    public:
        String(){
            str="";
        }
        String(string s):str(s){}
        friend String operator+(string s,String s1);
        friend String operator+(String s1,string s);
        // String operator+()
};

String operator+(string s,String s1){
    String temp;
    temp.str=s+s1.str;
    return temp;
}
String operator+(String s1,string s){
    String temp;
    temp.str=s1.str+s;
    return temp;
}

int main(){
    String s1,s2;
    s2=s1+"sample";
    s2="sample"+s1;
    return 0;
}