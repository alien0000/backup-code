#include <iostream>
using namespace std;
int main()
{
    int n, m;
    bool flage=false;
    cin >> n >> m;
    int arr[n][m];
    int k;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            if(arr[i][j]==k){
                flage=true;
            }
        }
        
        
    }
    if(flage){
        cout<<"element is found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}
