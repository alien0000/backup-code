// Brute force approach

#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
       
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k <= j; k++)
            {
                
                sum=sum+arr[k];
                
                // cout << arr[k] << " ";
            }
            maxSum=max(maxSum,sum);
        }
        
    }
    cout<<maxSum;
    return 0;
}
