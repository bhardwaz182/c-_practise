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

    int sum=0;

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    cout<<"Sum of all elements in the array is  "<<sum<<endl;

    float avg=float(sum)/size;

    cout<<"Average of all input numbers = "<<avg;
    return 0;
}