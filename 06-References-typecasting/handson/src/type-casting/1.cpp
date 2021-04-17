#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int *ptr=new int[m*n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>*(ptr+(i*m+j));
        }
    }

    //cout<<*ptr<<"1st index\n";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(ptr+(i*m+j))<<" ";
        }
    }

    delete[] ptr;
}