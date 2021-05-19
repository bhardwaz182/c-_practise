#include<iostream>
using namespace std;

void rowNumbers(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(i-1)+1;k++){
            cout<<i;
        }

        cout<<endl;
    }
}

void rowNumbersReverse(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(i-1)+1;k++){
            cout<<i;
        }

        cout<<endl;
    }
}

void upDownNumbers(int n){
    int count;
    for(int i=1;i<=n;i++){
        count=1;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i-1;k++){
            cout<<count;
            count++;
        }
        //cout<<"here"<<count;
        for(int k=0;k<i;k++){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
}

void upNumbersDownAlpha(int n){
    int count;
    for(int i=1;i<=n;i++){
        count=1;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i-1;k++){
            cout<<count;
            count++;
        }
        cout<<count;
        for(int k=i-1;k>0;k--){
            char temp='A'+k-1;
            cout<<temp;
        }
        cout<<endl;
    }
}

void alphaNumericAlternate(int n){
    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(i-1)+1;k++){
            if(k%2){
                cout<<k+1;
            }else{
                char temp='A'+k;
                cout<<temp;
            }
        }
        cout<<endl;
    }
}

int main(){
    alphaNumericAlternate(5);
    return 0;
}