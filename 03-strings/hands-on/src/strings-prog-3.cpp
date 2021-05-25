#include<iostream>
using namespace std;

bool isEqual(char* str1,char* str2){
    while(*str1!='\0'&& *str2!='\0'){
        if (*str1!=*str2){
            return false;
        }
        str1++;
        str2++;
    }
    return true;
}

int main(){
    char str1[100],str2[100];
    cout<<"enter first string";
    cin>>str1;
    cout<<"enter second string";
    cin>>str2;
    if(isEqual(str1,str2)){
        cout<<"**Enterd strings are identical**";
    }else{
        cout<<"Enterd strings are not identical";
    }
    return 0;
}