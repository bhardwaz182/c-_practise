#include<iostream>
using namespace std;

template <class t>
void sort(t A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
        
    }
}
template <class t>
void swap(t* a,t* b){
    t temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int A[5]={5,4,3,2,1};
    sort(A,5);
    for(int i1=0;i1<5;i1++){
        cout<<A[i1]<<" ";
    }
    cout<<endl;

    float A1[5]={5.1,4.3,3.2,2.1,1.1};
    sort(A1,5);
    for(int i1=0;i1<5;i1++){
        cout<<A1[i1]<<" ";
    }
    cout<<endl;

    char A2[5]={'e','d','c','b','a'};
    sort(A2,5);
    for(int i1=0;i1<5;i1++){
        cout<<A2[i1]<<" ";
    }
    cout<<endl;
}