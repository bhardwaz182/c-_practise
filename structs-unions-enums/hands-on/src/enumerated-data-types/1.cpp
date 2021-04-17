#include<iostream>

using namespace std;

int main(){
    enum week{
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };

    int DailyWeight[7];
    for(int i=sunday;i<=saturday;i++){
        cin>>DailyWeight[i];
    }

    cout<<DailyWeight[tuesday]<<"\n"<<DailyWeight[thursday];
    return 0;
}