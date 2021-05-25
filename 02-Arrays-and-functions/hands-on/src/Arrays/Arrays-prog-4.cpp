#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[100];

    cout<<"Enter "<<size<<" elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int larg=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }

    cout<<"Largest element in array "<<larg;
    return 0;
}