#include<iostream>
using namespace std;

  class A{

   public:
       int a=6 ;
          private:
       char s[20]="prive " ;

  } ;

int main(){

 A a1;
  char* p= (char*)&a1 ;
  p+=4 ;
  cout << p;
}
