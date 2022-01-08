#include<iostream>
#include<string>
using namespace std;
class student 
{
    private:
    string emailId;
  long long int phNo;
    public:
    string nam;
    int rollNo;
    void setval( string emailId,long long int phNo);
    void getval(){
        cout<<"student name : "<<nam<<endl;
        cout<<"Rollno is: "<<rollNo<<endl;
        cout<<"Phone no is : "<<phNo<<endl;
        cout<<"Email id : "<<emailId<<endl;
    }
};
void student :: setval( string emailId1,long long int phNo1){
    emailId=emailId1;
    phNo=phNo1;
}
int main()
{
    student s1;
    s1.nam="sajda begam";
    s1.rollNo=40;
    s1.setval("sajdakabir2001@gmail.com",6295738819);
    s1.getval();
    return 0;
}











// #include<iostream>
// using namespace std;


// class BankDeposit{
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){}
//         BankDeposit(int p, int y, float r); // r can be a value like 0.04
//         BankDeposit(int p, int y, int r); // r can be a value like 14
//         void show();
// };

// BankDeposit :: BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// BankDeposit :: BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// void BankDeposit :: show(){
//     cout<<endl<<"Principal amount was "<<principal
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }

// int main(){
//     BankDeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;
    
    
//     cout<<"Enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout<<"Enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }
