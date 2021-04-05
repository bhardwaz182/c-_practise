#include<iostream>
using namespace std;

long long int factorial(int n){
    if (n<2){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter a positive integer : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" = "<<factorial(n);
    return 0;
}