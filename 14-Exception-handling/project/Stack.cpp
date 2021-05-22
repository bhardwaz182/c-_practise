#include<iostream>
#include<exception>
#include<string>
using namespace std;

// struct StackFull:public exception{
//     const char* what() const throw(){
//         return "Stack is full";
//     }
// };

// struct StackEmpty:public exception{
//     const char* what() const throw(){
//         return "Stack is empty";
//     }
// };

class StackFull{
    public:
        char* what(){
            return "stack is empty";
        }
};

class StackEmpty{
    public:
        char* what(){
            return "stack is full";
        }
};

class Stack{
    string *arystr;
    int top;
    int stacksize;
    int maxsize;

    public:
        Stack(int n):maxsize(n){
            arystr=new string[n];
        }
        void push(string s){
            if(stacksize==maxsize){
                StackFull z;
                throw z;
            }
            string *newAry=new string[stacksize+1];
            newAry[0]=s;
            for(int i=0;i<stacksize;i++){
                newAry[i+1]=arystr[i];
            }
            delete[] arystr;
            arystr=newAry;
            stacksize+=1;
            
        }

        string pop(){
            if(stacksize==0){
                StackEmpty z;
                throw z;
            }
            string *newAry=new string[stacksize-1];
            string temp=arystr[0];
            for(int i=0;i<stacksize-1;i++){
                newAry[i]=arystr[i+1];
            }
            arystr=newAry;
            stacksize-=1;
            return temp;
        }

        bool isEmpty(){
            return stacksize==0;
        }
        bool isFull(){
            return stacksize==maxsize;
        }

};

int main(){
    Stack s(5);
    try{
        s.pop();
    }catch(StackEmpty e){
        cout<<e.what();
    }
    return 0;
}