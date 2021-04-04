#include<iostream>
using namespace std;

int checkidentical(char *str1,char *str2){
    while(*str1!='\0' && *str2!='\0'){
        if(*str1!=*str2){
            return 0;
        }
        str1++;
        str2++;
    }
    return 1;
}

int main(){
    char str1[]="hello";
    char str2[]="hello";
    cout<<checkidentical(str1,str2);
    return 0;
}