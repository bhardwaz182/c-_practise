#include<iostream>

using namespace std;

int countvowels(char *st){
    int count=0;
    while(*st!='\0'){
        if(*st=='a'||*st=='e'||*st=='i'||*st=='o'||*st=='u'){
            count++;
        }
        st++;
    }
    return count;
}

int main(){

    while (true)
    {
        char st[100];
        cin>>st;
        int temp=countvowels(st);

        if(temp>=3){
            cout<<st<<"\t--- "<<temp<<endl;
        }else{
            cout<<st<<endl;
        }
    }
    

    return 0;
}