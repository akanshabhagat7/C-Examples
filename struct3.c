#include<stdio.h>

struct Demo
{
    int Arr[4];
	float Brr[3];

};


int main()
{
   struct Demo obj1;
   obj1.Arr[0]= 10;
   obj1.Arr[1]= 20;
   obj1.Arr[2]= 30;
   obj1.Arr[3]=40;
   
   obj1.Brr[0]=20.11;
   
   printf("Value at Arr[0] is %d\n",obj1.Arr[0]);
   printf("Value at Arr[3] is %d\n",obj1.Arr[3]);
   
   printf("Value at Brr[0] is %f\n",obj1.Brr[0]);
   printf("Value at Brr[1] is %f\n",obj1.Brr[1]);
   

   return 0;
}