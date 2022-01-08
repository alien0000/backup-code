#include<iostream>
using namespace std;
int Linear_Search(int n, int arr[], int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int key;
    cout<<"Enter the array size ";
    cin>>n;
    int arr[n];
    cout<<"Enter the arry elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Which element you want to find: ";
    cin>>key;
    cout<<"The element found in index "<< Linear_Search(n,arr,key);
    return 0;
}
