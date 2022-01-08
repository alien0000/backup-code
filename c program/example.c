#include<stdio.h>
int main(){
//   int a=30 ,b=40,x;
//    x=(a!=10) && (b=40);
//    printf("x=%d",x);
//     return 0;
// int i;
// for(i=1;i++<=5;printf("%d\n",i));
int k=35, *z, *y;
z=&k;
y=z;
printf("%d",y);
*z++=*y++;
k++;
printf("k=%d z=%d y=%d",k,z,y);
return 0;
}