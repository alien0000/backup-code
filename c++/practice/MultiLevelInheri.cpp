#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public student
{
protected:
    float math;
    float c;

public:
    void set_Exam(float, float);
    void get_Exam(void);
};
void Exam::set_Exam(float m1, float m2)
{
    math = m1;
    c = m2;
}
void Exam::get_Exam(void)
{
    cout << "You're math number is " << math << endl;
    cout << "You're c number is " << c << endl;
}
class Result : public Exam
{
protected:
    float persentaeg;

public:
    void get_persentaeg(void);
};
void Result::get_persentaeg()
{
    get_roll_number();
    get_Exam();
    cout << "You're persentage is " << (math + c) / 2 << "%" << endl;
}
int main()
{
    Result sajda;
    sajda.set_roll_number(40);
    sajda.set_Exam(92.0, 98.0);
    sajda.get_persentaeg();
    return 0;
}
