#include<iostream>

using namespace std;

int main(){
    int arr[100][100];
    cout<<"Enter the number of rows and columns"<<endl;
    int row,col;
    cin>>row>>col;
    cout<<"Enter elements of the matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
            //cout<<i<<j<<endl;
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<"    ";
        }
        cout<<endl;
    }
    return 0;
}