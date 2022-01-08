// if maxtrix element has a sortring order then we can do it by O(n).
// if we use linear search for searching and time complixcity is O(nm).

// for TC=O(n)

#include<iostream>
using namespace std;
int main()
{    bool found=false;
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;
   
    int row=0;
    int col=m-1;
    while (row<n and col>=0)
    {
       if(arr[row][col]==k){
           found=true;
       }
        if (arr[row][col]>k)
       {
           col--;
       }
       else{
           row++;
       }
       
    }

    if(found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    
} 
