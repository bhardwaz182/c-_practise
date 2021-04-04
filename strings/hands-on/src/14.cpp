#include<iostream>

using namespace std;

int main(){
    char str[]="uvwxyzabc";
    char *ptr=str;
    cout<<2[ptr]<<endl;
    cout<<ptr[2]<<endl;
    cout<<*(ptr+2);
    return 0;
}