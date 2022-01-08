#include <iostream>
using namespace std;
class student
{
    int rollNo;

public:
    void setid()
    {
        cout << "enter the student roall no " << endl;
        cin >> rollNo;
    }
    void getid()
    {
        cout << "the student rollno is " << rollNo<<endl;
    }
};
int main()
{
    student s[10];
    int n;
    cout << "how many students roll number  you want to set "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].setid();
        s[i].getid();
    }
    return 0;
}
