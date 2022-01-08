#include<iostream>
using namespace std;
class Base1{
public:
void greet(){
    cout<<"hello sajda"<<endl;
}
};
class Base2{
public:
void greet(){
    cout<<" what are you doing"<<endl;
}
};
class Derive:public Base1,public Base2{
    int a;
public:
void greet(){
    Base2::greet();
}
};
int main()
{
    Base1 b1;
    b1.greet();
    Derive d;
    d.greet();
   return 0; 
} 
