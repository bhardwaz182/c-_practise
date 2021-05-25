#include<iostream>
using namespace std;

int length(char *str){
    int len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    return len;
}

void mystrcat(char *str1,char *str2 ,char *str3){
    while(*str1!='\0'){
        //cout<<str3<<endl;
        *str3=*str1;
        str3++;
        str1++;

    }
    while(*str2!='\0'){
        //cout<<* str3<<endl;
        *str3=*str2;
        str3++;
        str2++;
    }
    //cout<<str3<<endl;
}

int main(){

    char str1[]="Hello";
    char str2[10]="world";
    char str3[11];

    printf(" the values are %s,%s\n",str1,str2);
    mystrcat(str1,str2,str3);

    //cout<<str3;
    printf("%s",str3);
    return 0;
}