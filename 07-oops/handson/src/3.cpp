#include<iostream>

using namespace std;

class student{
    private:
        int admno;
        char sname[20];
        float eng,math,science,total;
        float ctotal(void){
            return eng+math+science;
        }
    public:
        void Readdata( int adm,char *snam,float en,float mat,float scienc){
            admno=adm;
            //sname=snam;
            eng=en;
            math=mat;
            science=scienc;
            int i=0;
            while(*snam!='\0'){
                sname[i]=*snam;
                //cout<<"in while loop"<<snam[i]<<" "<<i<<" "<<*snam<<endl;
                i++;
                snam++;
            }
            total=ctotal();
        }
        void Displaydata(void){
            cout<<admno<<"\n"<<sname<<"\n"<<eng<<"\n"<<math<<"\n"<<science<<"\n"<<total;
        }
};

int main(){
    student stu;
    stu.Readdata(1,"ram",10,10,10);
    stu.Displaydata();
    return 0;
}