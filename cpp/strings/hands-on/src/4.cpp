#include<iostream>
using namespace std;

int mystrlen(char *str){
    int len=0;
    while(*str!='\0'){
        str++;
        len++;
    }
    return len;
}


int main(){

    char str[1];
    cin>>str;
    cout<<str<<endl;
    cout<<mystrlen(str);

    return 0;
}