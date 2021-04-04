#include<iostream>
#include<string>
using namespace std;

bool compare(string str1,string str2){
    int length=str1.length();
    for(int i=0;i<length;i++){
        if(str1[i]!=str2[i]){
            return true;
        }
    }
    return false;
}

int main(){

    string str1;
    string str2;
    cout<<"Enter first string:"<<endl;
    getline(cin,str1);
    cout<<"Enter second string"<<endl;
    getline(cin,str2);

    if(compare(str1,str2)){
        cout<<"**Entered strings are not identical";
    }
    else{
        cout<<"** Entered strings are identical **";
    }

}