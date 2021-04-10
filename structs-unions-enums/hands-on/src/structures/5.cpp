#include<iostream>

using namespace std;

struct EMP{
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};

int main(){
    struct EMP e1;
    struct EMP *eptr;
    eptr=&e1;

    cin>>eptr->emp_name>>eptr->emp_id>>eptr->emp_age>>eptr->emp_salary;

    cout<<eptr->emp_name<<"\n"<<eptr->emp_id<<"\n"<<eptr->emp_age<<"\n"<<eptr->emp_salary;


    return 0;
}