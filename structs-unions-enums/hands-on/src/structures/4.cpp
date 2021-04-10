#include<iostream>
#include<cstring>

using namespace std;

struct BATSMAN {
    char name[100];
    int age;
    int highest_score;
    int least_score;
    int no_of_ducks;    
};

void print(struct BATSMAN *b){
    cout<<"************printing details****************\n";
    for(int i=0;i<3;i++){
        cout<<"name: "<<b[i].name<<"\nAge: "<<b[i].age<<"\nhighest score"<<b[i].highest_score<<"\n least score"<<b[i].least_score<<"\n no of ducks :"<<b[i].no_of_ducks<<endl;
    }
}

int main(){

    struct BATSMAN bat[3];

    for(int i=0;i<3;i++){
        cout<<"batsman name:";
        cin>>bat[i].name;
        cout<<"age:";
        cin>>bat[i].age;
        cout<<"highest_score";
        cin>>bat[i].highest_score;
        cout<<"least score";
        cin>>bat[i].least_score;
        cout<<"no of ducks:";
        cin>>bat[i].no_of_ducks;
    }

    print(bat);
    return 0;
}