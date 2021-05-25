#include<iostream>
using namespace std;
int main(int argv,char* argc[]){
    cout<<argc[1]<<" "<<argv<<endl;
    char* str=argc[1];
    int len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    cout<<"Length of the string is : "<<len;
    return 0;
}