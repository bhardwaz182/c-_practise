#include<iostream>
using namespace std;

class Person{
    public:
        char name[20];
        int age;
        char address[20];
};

class Student:public Person{
    public:
        int year;
        char course[20];
        char collegeName[20];
        Student(char* name,int age,char* address,int year,char* course,char* collegeName){
            this->age=age;
            this->year=year;
            int i=0;
            while(*name!='\0'){
                this->name[i]=*name;
                name++;
                i++;
            }
            i=0;
            while(*address!='\0'){
                this->address[i]=*address;
                address++;
                i++;
            }
            i=0;
            while(*course!='\0'){
                this->course[i]=*course;
                course++;
                i++;
            }
            i=0;
            while(*collegeName!='\0'){
                this->collegeName[i]=*collegeName;
                collegeName++;
                i++;
            }
        }
        ~Student(){
            cout<<"\nthis is destructor in student\n";
        }
        void printData(){
            cout<<this->name;
            //cout<<this->name<<" "<<this->age<<" "<<this->address<<" "<<this->age<<" "<<this->course<<" "<<this->collegeName<<endl;
        }
};

class Employee : public Person{
    public:
        int employeeNumber;
        int dateOfJoining;
        int salary;
        Employee(char* name,int age,char* address,int employeeNumber,int dateOfJoining,int salary){
            this->age=age;
            this->employeeNumber=employeeNumber;
            this->dateOfJoining=dateOfJoining;
            this->salary=salary;
            int i=0;
            while(*name!='\0'){
                this->name[i]=*name;
                name++;
                i++;
            }
            i=0;
            while(*address!='\0'){
                this->address[i]=*address;
                address++;
                i++;
            }
        }
        ~Employee(){
            cout<<"\nthis is destructor in employee\n";
        }
        void printData(){
            cout<<this->name<<" "<<this->age<<" "<<this->address<<" "<<this->employeeNumber<<" "<<this->dateOfJoining<<" "<<this->salary<<endl;
        }
};
int main(){
    Employee emp("emp1",21,"kadapa",345,18,45);
    Student stu("stu1",18,"vellore",2017,"ece","vit");
    emp.printData();
    stu.printData();
    return 0;
}