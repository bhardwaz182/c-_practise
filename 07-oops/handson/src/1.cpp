#include<iostream>
using namespace std;

class Queue{
    int * qe;
    int qsize;
    int idxfront;
    int idxrear;
    public:
        Queue():qsize(0){}

        void insert(int a){
            if (qsize){
                int* newQ=new int[qsize+1];
                for(int i=0;i<qsize;i++){
                    newQ[i]=qe[i];
                }
                newQ[qsize]=a;
                delete[] qe;
                qe=newQ;
                qsize+=1;
            }else{
                int* newQ=new int[1];
                newQ[0]=a;
                qe=newQ;
                qsize++;
            }
        }
        void cleanup(){
            delete[] qe;
        }
        int remove(){
            int* newQ=new int[qsize-1];
            int temp=qe[0];
            for(int i=1;i<qsize;i++){
                newQ[i-1]=qe[i];
            }
            //newQ[qsize]=a;
            delete[] qe;
            qe=newQ;
            qsize-=1;
            return temp;
        }
        int size(){
            return qsize;
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
    q.insert(8);
    q.insert(12);
    q.insert(17);
    q.insert(25);
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    q.insert(30);
    cout<<q.size()<<endl;
    cout<<q.remove()<<endl;
    cout<<q.remove()<<endl;
    cout<<q.size();
    return 0;
}