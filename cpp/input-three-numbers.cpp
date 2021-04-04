#include <iostream>
using namespace std;
void demo(void){
    int x=1;
    {
        x=2;
        cout<<x<<endl;
    }
    cout<<x<<endl;
}
int main(){
    demo();
    return 0;
}