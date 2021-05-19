#include<iostream>
#include<cmath>
using namespace std;


bool isprime(int n){
    if(n==2||n==3){
        return true;
    }
    int n1=sqrt(n);
    for(int i=2;i<=n1;i++){
        if((n%i)==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=n/2;i>=2;i--){
        if(isprime(i)&&isprime(n-i)){
            cout<<n<<" "<<i<<" "<<n-i<<endl;
            break;
        }
    }
}