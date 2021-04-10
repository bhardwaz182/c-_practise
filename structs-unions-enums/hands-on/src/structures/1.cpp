#include<iostream>
#include<cstring>
using namespace std;

struct EMP{
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};

void printstruct(struct EMP e){
    cout<<"employee name"<<e.emp_name<<"\nemployee id "<<e.emp_id<<"\n employee age "<<e.emp_age<<"\n employee salary "<<e.emp_salary<<endl;
}

int main(){

    struct EMP e1,e2,e3;
    strcpy(e1.emp_name,"employee_1");
    strcpy(e2.emp_name,"employee_2");
    strcpy(e3.emp_name,"employee_3");
    e1.emp_id=1;
    e2.emp_id=2;
    e3.emp_id=3;
    e1.emp_age=20;
    e2.emp_age=21;
    e3.emp_age=22;
    e1.emp_salary=200;
    e2.emp_salary=300;
    e3.emp_salary=400;

    printstruct(e1);
    printstruct(e2);
    printstruct(e3);
    return 0;
}