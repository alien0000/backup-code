#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the arrat elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"The max number is "<<max<<endl<<"The min number is "<<min;
    return 0;
}
