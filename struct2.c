#include<stdio.h>
struct Hello
{
	int iValue;
	float fValue;
	int i;	
	
};

int main()
{

   struct Hello Arr[4];
   
   Arr[0].iValue=10;
   Arr[0].fValue=11.20;
   Arr[0].i=5;
   
   Arr[1].iValue=20;
   Arr[1].fValue=22.11;
   Arr[1].i=7;
   
   printf("The value of ivalue at 0th index is %d\n",Arr[0].iValue);
   printf("The value of ivalue at 1st index is %d\n",Arr[1].iValue);
   
   return 0;
}