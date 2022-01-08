#include<iostream>
using namespace std;
int Binary_Search(int arr[], int n,int key){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid =(s+e)/2;
        if(arr[mid==key]){
            return mid;
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
    }
    return -1;
    
}
int main(){
    int n;
    int key;
    
    cout<<"Enter ther the arry size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Which number you want to find: ";
    cin>>key;
    cout<<"The Key found in index "<<Binary_Search(arr,n,key);
    return 0;
}