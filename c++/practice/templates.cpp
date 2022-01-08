#include <bits/stdc++.h>
using namespace std;
class vector1
{
public:
    int *arr;
    int size;
    vector1(int m)
    {
        size = m;
        arr = new int[size];
    }
   int dp(vector1 &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d =+ this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector1 v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector1 v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
     int a= v1.dp(v2);
     cout<<a<<endl;
      return 0;
}
