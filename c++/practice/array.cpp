#include <iostream>
using namespace std;
class shop
{
    int bookId[10];
    int bookPrice[10];
    int count;

public:
    void counter()
    {
        count = 0;
    }
    void setbookInfo(void);
    void display(void);
};
void shop::setbookInfo(void)
{
    cout << "enter the book ID of number  " <<count+1 << endl;
    cin >> bookId[count];
    cout << "enter the price " << endl;
    cin >> bookPrice[count];
    count++;
}
void shop::display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "the book price eith id     " << bookId[i] << "   is   " << bookPrice[i] << endl;
    }
}
int main()
{
    shop s1;
    s1.counter();
    s1.setbookInfo();
    s1.setbookInfo();
    s1.setbookInfo();
    s1.display();
    return 0;
}