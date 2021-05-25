#include<iostream>

using namespace std;

class Veichles{
    public:
        Veichles(){
            cout<<"constructor in veichles\n";
        }
        ~Veichles(){
            cout<<"destructor in veichles\n";
        }
};

class FourWheelers:public Veichles{
    public:
        FourWheelers(){
            cout<<"constructor in four wheelers\n";
        }
        ~FourWheelers(){
            cout<<"Destructor in four wheelers\n";
        }
};

class Cars:public FourWheelers{
    public:
        Cars(){
            cout<<"constructor in cars\n";
        }
        ~Cars(){
            cout<<"Destructor in cars\n";
        }
};

class Sedan:public Cars{
    public:
        Sedan(){
            cout<<"constructor in sedan\n";
        }
        ~Sedan(){
            cout<<"Destructor in sedan\n";
        }
};

class Suv:public Cars{
    public:
        Suv(){
            cout<<"constructor in Suv\n";
        }
        ~Suv(){
            cout<<"Destructor in Suv\n";
        }
};

int main(){
    Sedan sed;
    Suv suv;
    return 0;
}