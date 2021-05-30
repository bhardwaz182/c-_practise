#include<iostream>
#include<assert.h>
using namespace std;
class Base{};

class Der1 : public Base { };
Der1  dobj;
Base & bref = dobj;
Base  bobj;
Base  *bptr = &dobj;
int main(){
assert ( typeid(bref) == typeid(dobj) );
assert ( typeid(bobj) == typeid(dobj) );
assert ( typeid(*bptr) == typeid(dobj) );
return 0;
}
