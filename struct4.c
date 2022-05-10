#include<stdio.h>

struct Demo
{
	int *iptr;
	float *fptr;
	
};

int main()
{
    struct Demo obj1;
	
	int no =10;
	float f = 20.10;
	
	obj1.iptr=&no;
    obj1.fptr=&f;
	
	printf("%d\n",*(obj1.iptr));
	printf("%f\n",*(obj1.fptr));
   return 0;

}