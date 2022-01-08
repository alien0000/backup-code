#include <iostream>
using namespace std;

int main() {
   int r, constPart = 1;
   printf("Enter the number of rows: ");
   cin>>r;
   for (int i = 0; i < r; i++) {
      for (int s = 1; s <= r - i; s++)
         cout<<" ";
      for (int j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            constPart = 1;
         else
            constPart = constPart * (i - j + 1) / j;
         cout<<constPart<<" ";
      }
      cout<<endl;
   }
   return 0;
}
