#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ofstream out;
    // out.open("sample.txt");
    // string s = "what going on with you my baby.";
    // out << s;
    // out.close();
    // return 0;

    ifstream in;
    string st;
    in.open("simple.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}
