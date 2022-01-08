#include <iostream>
using namespace std;
int count = 0;
class number
{
    int a;

public:
    number()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~number()
    {
        cout << "This is the time when distructor is called for object number  " << count << endl;
        count--;
    }
};

int main()
{
    number n1;

    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        number n2, n3;
        cout << "Exiting this block" << endl;
    }

    return 0;
}
