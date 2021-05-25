#include<iostream>
#include<string>

using namespace std;

class Person{
    string name;
    public:
        Person(string name){
            this->name=name;
        }
        string getname(){
            return name;
        }
};

class Participant:public Person{
    public:
        Participant(string name):Person(name){
            //cout<<"this is in person";
        }
};

int main(){
    return 0;
}