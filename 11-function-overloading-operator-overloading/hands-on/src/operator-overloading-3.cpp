#include<iostream>
#include<string>
using namespace std;

class String{
    string s;
    public:
        String(string s1):s(s1){}

        char &operator[](int n){
            return s[n];
        }
};

int main(){
    String s("abcd");
    char ch;
    s[0]='A';
    ch=s[1];
    cout<<ch<<" "<<s[0];
}