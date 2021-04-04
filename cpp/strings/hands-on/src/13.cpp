#include<iostream>

using namespace std;

int main(){
    char str[]="wipro";
    char *s=str;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s<<" "<<*s<<endl;
    cout<<*(s+3);
    return 0;
}