#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1;

public:
    void set_base1(int b1)
    {
        base1 = b1;
    }
};
class Base2
{
protected:
    int base2;

public:
    void set_basse2(int b2)
    {
        base2 = b2;
    }
};
class Derive : public Base1, public Base2
{
public:
    void display(void)
    {
        cout << "the value of base1 is " << base1 << endl;
        cout << "the value of base2 is " << base2 << endl;
        cout << "the total va;ue is " << base1 + base2 << endl;
    }
};
int main()
{
    Derive saju;
    saju.set_base1(10);
    saju.set_basse2(100);
    saju.display();
    return 0;
}
