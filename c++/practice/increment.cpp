#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int withdraw_amount;
    cin >> withdraw_amount;
    float total_amount;
    cin >> total_amount;
    // int excte_amount = total_amount - 0.50;
    if (withdraw_amount % 5 == 0)
    {
        cout << ((total_amount-0.5) - withdraw_amount ) << endl;
    }
    else
    {
        cout << total_amount<<".00";
    }
    return 0;
}