
// for sorted array and the time complexcity is O(n)

#include <iostream>
using namespace std;
bool pairSum(int n, int arr[], int k)
{
    int low = 0;
    int heigh = n - 1;
    while (low < heigh)
    {
        if (arr[low]+arr[heigh] == k)
        {
            cout<<low<<" "<<heigh<<endl;
            return true;
        }
        else if (arr[low]+arr[heigh]  < k)
        {
            low++;
        }
        else
        {
            heigh--;
        }
    }
    return false;
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout<<pairSum(n, arr, k);
    return 0;
}
