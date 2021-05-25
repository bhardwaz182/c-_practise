#include<iostream>
using namespace std;

int main(){
    int arr[20];
    for(int i=0;i<20;i++){
        cin>>arr[i];
    }
    int sum=0,count=0;
    for(int i=0;i<20;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
            count++;
        }
    }
    cout<<"sum of even elements in the array\n"<<sum<<"\nnumber of even elements in the array\n"<<count;
    return 0;
}