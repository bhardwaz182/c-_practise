#include<iostream>

using namespace std;
namespace ns{
  int x=16; 
}
int main( ) {
  int x = 9;
  using namespace ns;
  x = 20;    
  cout<<x;
  return 0;
}