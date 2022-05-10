#include<stdio.h>

struct Demo
{
	int iValue;
	float fValue;
	
};

int main()
{
   struct Demo obj1;
   
   obj1.iValue=11;
   obj1.fValue=22.11;
   
   //float *ptr=&obj1;
   //ptr->fValue = 22.1;
   
   printf("Value of iValue by direct accesssing is %d\n",obj1.iValue);
   printf("Value of fValue by direct accesssing is %f\n",obj1.fValue);
      
   return 0;
}