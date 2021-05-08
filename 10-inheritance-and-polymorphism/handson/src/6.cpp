#include<iostream>
#include<string>
using namespace std;

class Sample{
    private:
        int intdata;
        string stringdata;
    public:
        void setIntdata(int intdata){
            this->intdata=intdata;
        }
        void setStringdata(string stringdata){
            this->stringdata=stringdata;
        }

        int getIntdata(){
            return intdata;
        }
        string getStringdata(){
            return stringdata;
        }

        char charecterAt(int i){
            return stringdata[i];
        }
        string reverse(){
            return string(stringdata.rbegin(),stringdata.rend());
        }
};

int main(){
    Sample sam;
    sam.setIntdata(4);
    sam.setStringdata("hello");
    cout<<sam.getIntdata()<<" "<<sam.getStringdata()<<" "<<sam.charecterAt(1)<<" "<<sam.reverse();
    return 0;
}