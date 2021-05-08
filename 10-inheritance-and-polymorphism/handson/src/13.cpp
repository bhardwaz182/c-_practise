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
    Participant p1("Rahul"),p2("Arjun");
    //Bcout<<p1.getname();
    p1=p2;
    cout<<p1.getname();
    return 0;
}