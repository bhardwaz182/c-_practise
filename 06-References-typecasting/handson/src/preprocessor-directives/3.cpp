#include<iostream>
#include <cstring>
#include <cstdio>

using namespace std;
#define CASE_CHANGE(a) {
    while(*a!='\0'){
        cout<<putchar(toupper(*a));
        a++;
    }
}
int main(int argc,char* argv[]){
    CASE_CHANGE(argv[1]);

    return 0;
}