#include<iostream>

using namespace std;

class Book{
    private:
        int BookNo;
        char BookTitle[20];
        float price;
        float ToatalCost(int n){
            return n*price;
        }
    public:
        void Input(int bookno,char *title,float pric){
            BookNo=bookno;
            int i=0;
            while(*title!='\0'){
                BookTitle[i]=*title;
                i++;
                title++;
            }
            price=pric;
        }
        void Purchase(){
            int n1;
            cin>>n1;
            cout<<ToatalCost(n1);
        }
};

int main(){
    Book book;
    book.Input(1,"life of pi",300);
    book.Purchase();
    return 0;
}