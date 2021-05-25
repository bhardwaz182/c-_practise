#include<iostream>
using namespace std;

void concat(char* str1,int n,char* str2){
    while (*str1!='\0')
    {
        str1++;
    }
    *str1=n;
    cout<<"char(n)"<<(char)n;
    str1++;
    while (*str2!='\0')
    {
        *str1=*str2;
        str1++;
        str2++;
    }
    
    
}

int main(){
    char str1[100],str2[100];
    int n;
    cin>>str1>>n>>str2;
    char* str=str1;
    concat(str1,n,str2);
    while(*str!='\0'){
        cout<<*str;
        str++;
    }
}