#include<iostream>
using namespace std;

void mystrrev(char *str1,char *str2){
    while(*(++str1));
    str1--;
    while(*str1!=0){
        *str2=*str1;
        str1--;
        str2++;
        cout<<str2<<endl;
    }
}

int main(){
    char str1[6]="Hello";
    char str2[6];
    mystrrev(str1,str2);
    cout<<str2<<endl;
    return 0;
}