#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // Constructor declaration
    void printdata()
    {
        cout << "Youre number is " << a << " + " << b << "i" << endl;
    }
};
// complex ::complex(){
//     a=10; --->This is a default constructor as it takes no parameters
//     b=2;
// }
complex ::complex(int x, int y) // ----> This is a paramerized constructor as it takes parameters
{
    a = x;
    b = y;
}
int main()
{
      // Implicit call
    complex c1(10, 2),c3(40, 40);
    c1.printdata();
     // Explicit call
    complex c2=complex(5, 7);
    c2.printdata();
    c3.printdata();
    return 0;
};
