#include<iostream>
using namespace std;

int identifyHeavy(int input1[][3]){
    int sum=input1[0][0]+input1[0][2]+input1[2][0]+input1[2][2];
    int cent=input1[1][1];
    if(sum>cent){
        return 1;
    }
    if(sum<cent){
        return 2;
    }
    if(sum==cent){
        return 3;
    }
    return 0;
}

int main(){
    int A[3][3]={{5,1,3},{2,9,4},{8,7,6}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>A[i][j];
    //     }
    // }
    cout<<identifyHeavy(A);
    return 0;

}