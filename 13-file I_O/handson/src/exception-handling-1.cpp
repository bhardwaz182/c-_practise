#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    ifstream outfile;
    ofstream infile;
    outfile.open("student_unformatted.txt");
    infile.open("student_formatted.txt");
    string data;
    outfile>>data;
    while(!outfile.eof()){
        cout<<data<<endl;
        infile<<data;
        outfile>>data;
    }
    outfile.close();
    infile.close();
}