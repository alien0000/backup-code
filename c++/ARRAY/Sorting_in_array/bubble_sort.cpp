#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 1;
    while (counter <= n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
