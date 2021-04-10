#include<iostream>
#include<cstring>

using namespace std;

struct student{
    char student_name[100];
    int roll_no;
    int mark1;
    int mark2;
    int mark3;    
};

int main(){
    struct student stu[5];
    strcpy(stu[0].student_name,"first_student");
    stu[0].roll_no=1;
    stu[0].mark1=10;
    stu[0].mark2=10;
    stu[0].mark3=10;
    strcpy(stu[1].student_name,"second_student");
    stu[1].roll_no=2;
    stu[1].mark1=20;
    stu[1].mark2=20;
    stu[1].mark3=20;

    strcpy(stu[2].student_name,"third_student");
    stu[2].roll_no=3;
    stu[2].mark1=30;
    stu[2].mark2=30;
    stu[2].mark3=30;

    strcpy(stu[3].student_name,"fourth_student");
    stu[3].roll_no=4;
    stu[3].mark1=40;
    stu[3].mark2=40;
    stu[3].mark3=40;

    strcpy(stu[4].student_name,"fifth_student");
    stu[4].roll_no=5;
    stu[4].mark1=50;
    stu[4].mark2=50;
    stu[4].mark3=50;

    string lowest=stu[0].student_name,highest=stu[0].student_name;
    int avlow=(stu[0].mark1+stu[0].mark2+stu[0].mark3)/3,avhigh=(stu[0].mark1+stu[0].mark2+stu[0].mark3)/3;

    for(int i=1;i<5;i++){
        int temp_av=(stu[i].mark1+stu[i].mark2+stu[i].mark3)/3;

        if (temp_av<avlow){
            lowest=stu[i].student_name;
            avlow=temp_av;
        }else if(temp_av>avhigh){
            highest=stu[i].student_name;
            avhigh=temp_av;
        }
    }

    cout<<lowest<<" "<<avlow<<endl;
    cout<<highest<<" "<<avhigh;
    return 0;
}