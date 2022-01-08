#include<iostream>
using namespace std;
class  Base{
    protected:
    int a;
    public:
void setdata(int x)
    {
    a=x;
}
int getdata(){
    return a;
}
    int b=2;
};
class   Derived: protected Base{
int c;
};
int main()
{
    Base b1;
    Derived d1;
    b1.setdata(5);
    cout<<b1.getdata()*b1.b;
    return 0;
} 
