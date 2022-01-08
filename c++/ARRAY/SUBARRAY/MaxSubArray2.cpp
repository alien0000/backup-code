// Kadane's Algorithm

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxSum=INT_MIN;
    int currentSum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        currentSum=currentSum+arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(currentSum,maxSum);
    }
    cout<<maxSum;

    return 0;
}