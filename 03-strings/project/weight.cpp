#include<iostream>
using namespace std;

int stringWeight(char* A,char *b){
    int s=0;
    while(*A!='\0'){
        if(isalpha(*A)){
            if(*A>=97){
                if((*A=='a'||*A=='e'||*A=='i'||*A=='o'||*A=='u')){
                    if(*b=='1'){
                        s+=*A-'a'+1;
                    }
                }else{
                    s+=*A-'a'+1;
                }
            }else{
                if((*A=='A'||*A=='E'||*A=='I'||*A=='O'||*A=='U')){
                    if(*b=='1'){
                        s+=*A-'A'+1;
                    }
                }else{
                    s+=*A-'A'+1;
                }
            }
        }
        A++;
    }
    return s;
}

int main(){
    cout<<stringWeight("Hello World","1");
    // cout<<int('a');
    return 0;
}