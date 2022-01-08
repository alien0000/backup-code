#include<iostream>
using namespace std;
float funAvg(int a,int b){
float avg=(a+b)/2.0;
return avg;
}

int main()
{
    float x;
    x=funAvg(4,4);
    printf("the avarage of the nunber is %f",x);
    return 0;
} 
