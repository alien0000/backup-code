#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    /*SimpleCalculator - Takes input of 2 numbers using
  a utility function and perfoms +, -, *, / and displays
   the results using another function.*/
protected:
    int a;
    int b;

public:
    void setvalue()
    {
        int x;
        int y;
        cout << "enter the tow values value " << endl;
        cin >> x >> y;
        a = x;
        b = y;
    }
    void addition(void);
    void subtration();
    void multiple();
    void divition();
    // void Display();
};
void SimpleCalculator::addition(void)
{
    // return (p+q);
    cout << "The additon of " << a << " and " << b << " is " << (a + b) << endl;
}
void SimpleCalculator::subtration(void)
{
    cout << "The subtration of " << a << "and " << b << " is " << (a - b) << endl;
}
void SimpleCalculator::multiple(void)
{
    cout << "The multiple of " << a << " and " << b << " is " << (a * b) << endl;
}
void SimpleCalculator::divition(void)
{
    cout << "The divition of " << a << " and " << b << " is " << (a / b) << endl;
}

class ScientificCalculator : public SimpleCalculator
{
protected:
    double p;

public:
    void get_value()
    {
        int x;
        cout << "enter the value ";
        cin >> x;
        a = x;
    }
    void get_angle()
    {
       float x;
        cout << "\nenter the angle\n";
        cin >> x;
        p = x;
    }
    void squre();
    void qube();
    void sin();
    void cos();
};
void ScientificCalculator ::squre()
{
    get_value();
    cout << " the squre value of " << a << " is " << a * a << endl;
}
void ScientificCalculator::qube()
{
    get_value();
    cout << " the qube value of " << a << " is " << a * a * a << endl;
}
void ScientificCalculator::sin()

{
    get_angle();
    float PI = 3.14159265;
   float result;
    // cout << "\nenter the angle\n";
    // cin >> x;
    // p = x;
    result = sin( p * PI / 180 );
    cout << "the sine of " << p << " is " << result << endl;
}
int main()
{
    //     SimpleCalculator casio;
    // int operation;
    // do
    // {

    //     cout << "Select the operation you want to perform on the Simpleclaculator" << endl;
    //     cout << "1.ADDITION" << endl
    //          << "2.SUBTRATION" << endl
    //          << "3.MULTIPLICATION" << endl
    //          << "4.DIVITION" << endl
    //          << "5.EXIT" << endl;
    //     cin >> operation;

    //     switch (operation)
    //     {
    //     case 1:
    //         casio.setvalue();
    //         casio.addition();
    //         break;
    //     case 2:
    //         casio.setvalue();
    //         casio.subtration();
    //         break;
    //     case 3:
    //         casio.setvalue();
    //         casio.multiple();
    //         break;
    //     case 4:
    //         casio.setvalue();
    //         casio.divition();
    //         break;
    //     case 5:
    //         exit(0);
    //         break;
    //     default:
    //         cout << "YOU ARE CHOOSE WRONG OPERATION" << endl;
    //         break;
    //     }
    // } while (operation != 5);

    ScientificCalculator casio;

    casio.squre();
    return 0;
}