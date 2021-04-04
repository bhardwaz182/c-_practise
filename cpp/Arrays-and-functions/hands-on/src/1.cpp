#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter search number: "<<endl;
    int search;
    cin>>search;
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            cout<<"found the number";
        }
    }
    return 0;
}