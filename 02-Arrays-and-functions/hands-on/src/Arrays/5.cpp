#include<iostream>

using namespace std;

int main(){
    cout<<"Enter the number of elements in the array"<<endl;
    int size;
    cin>>size;
    int arr[100];
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        int smal=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smal]){
                smal=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smal];
        arr[smal]=temp;
    }

    cout<<"The numbers arranged in ascending order are\n"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}