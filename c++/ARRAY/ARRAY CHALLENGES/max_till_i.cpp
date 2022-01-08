// given an array a[] of size n.For every i 0 to n-1 output max(a[0],a[1],...,a[i])
#include<iostream>
using namespace std;
int main()
{
    int n;
    int mx=-19999999;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}

