#include<iostream>
using namespace std;

void vowelstoZ(char *str){
    while(*str!='\0'){
        //cout<<(*str=='e')<<endl;
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'){
            //cout<<"i am here"<<endl;
            *str='z';
            
        }
        str++;
    }
}

int main(){
    char str[6]="hello";
    vowelstoZ(str);
    cout<<str;
    return 0;
}