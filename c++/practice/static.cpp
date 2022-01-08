#include <iostream>
using namespace std;
class emplyee
{
    int id;
    static int count;

public:
    void setdata();
    void getdata();
};
void emplyee::setdata(void)
{
    cout << "enter the emplyee id " << endl;
    cin >> id;
    count++;
}
void emplyee::getdata(void)
{
    cout << "the emplyee id is " << id << endl;
    cout << "the emplyee number is " << count << endl;
}
int emplyee::count;
int main()
{
    emplyee sajda, sahin, harry, saju;
    sajda.setdata();
    sajda.getdata();

    sahin.setdata();
    sahin.getdata();

    harry.setdata();
    harry.getdata();

    saju.setdata();
    saju.getdata();
    return 0;
}
