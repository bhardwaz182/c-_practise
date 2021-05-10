#include<iostream>
using namespace std;
int main() 
{
    try{
        int    d, n1, n2;
        cin >> n1;
        cin >> n2;
        if(n2==0){
            throw "Division by zero";
        }
        d = n1 / n2;
        // d=5/0;
        cout << "The division is " << d << endl;
    }catch(const char* e){
        cout<<e<<endl;
    }
}