#include<iostream>
using namespace std;

bool isequal(char* str1,char* str2){
    if(*str1=='\0'||*str2=='\0'){
        return false;
    }
    while(*str1!='\0' && *str2!='\0'){
        if(*str1!=*str2){
            return false;
        }
        str1++;
        str2++;
    }
    return true;
}


char* my_strstr(char*s1,char* s2){
    char* temp=NULL;
    while(*s1!='\0'){
        if(isequal(s1,s2)){
            return s1;
        }
        s1++;
    }
    return temp;
}


int main(int argc,char* argv[]){
    if(my_strstr(argv[1],argv[2])){
        cout<<"First string: "<<argv[1]<<"\nSecond String: "<<argv[2]<<"\nSubString Found: "<<argv[2];
    }else{
        cout<<"string not found";
    }
    return 0;
}