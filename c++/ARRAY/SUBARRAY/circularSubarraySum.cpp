#include <iostream>
#include <climits>
using namespace std;
int kadaneMesthod(int n, int arr[])
{
    int currentSum = 0;
    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum = arr[i] + currentSum;
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    
    return maxSum;
}

int main()
{
    int n;
    int finalAns=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrappSum;
    int nonWrappSum;
   

    nonWrappSum=kadaneMesthod(n,arr);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum=arr[i]+totalSum;
        arr[i]=-arr[i];
    }
    wrappSum=totalSum+kadaneMesthod(n,arr);

    finalAns=max(wrappSum,nonWrappSum);
    cout<<finalAns;
    return 0;
}
