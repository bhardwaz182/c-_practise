#include<iostream>

using namespace std;

int main(){
    char *arr[3]={"hello","world","welcome"};
    for(int i=0;i<3;i++){
        cout<<&arr[i]<<" "<<*arr[i]<<endl;
    }
    return 0;
}