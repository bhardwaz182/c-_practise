#include<iostream>
using namespace std;

class Queue{
    int * qe;
    int maxqsize;
    int qsize;
    int idxfront;
    int idxrear;
    public:
        Queue():maxqsize(10),qsize(0){
            qe=new int[10];
        }
        Queue(int n):maxqsize(n),qsize(0){
            qe=new int[n];
        }

        void add(int a){
            if(maxqsize==qsize){
                cout<<"Queue is full";
                return;
            }
            qe[qsize]=a;
            qsize++;
        }
        void cleanup(){
            delete[] qe;
        }
        int remove(){
            cout<<endl;
            if(qsize){
                int* newQ=new int[qsize-1];
                int temp=qe[0];
                for(int i=1;i<qsize;i++){
                    newQ[i-1]=qe[i];
                }
                //newQ[qsize]=a;
                delete[] qe;
                qe=newQ;
                qsize-=1;
                //cout<<temp;
                return temp;
            }
            return 0;
        }
        int getfront(){
            return qe[0];
        }
        int isFull(){
            return maxqsize==qsize;
        }
        int isEmpty(){
            return qsize==0;
        }
        void display(){
            for(int i=0;i<qsize;i++){
                cout<<qe[i]<<" ";
            }
            
        }
        ~Queue(){
            delete[] qe;
        }
};

int main(){
    Queue q;
    //cout<<"hi"<<endl;
    q.add(5);
    //q.display();
    q.add(10);
    q.add(15);
    //q.display();
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    q.add(30);
    q.add(37);
    //q.display();
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    q.add(45);
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    return 0;
}