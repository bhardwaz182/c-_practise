#include<iostream>
using namespace std;

int main(){
int    a;
char   b;
char   *pc;
char   buf[100];
 
cout <<typeid(a).name()<<endl;
cout <<typeid(b).name()<<endl;

cout <<typeid(&b).name()<<endl;
cout<<typeid(pc).name()<<endl;
cout<<typeid(*pc).name()<<endl;
cout<<typeid(buf).name()<<endl;
return 0;
}