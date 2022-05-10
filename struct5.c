#include<stdio.h>

struct Demo
{
	int i;
	float f;	
};

struct Hello
{
	int iValue;
	float fValue;
	struct Demo dobj1;
};


int main()
{
    struct Hello hobj1;
	hobj1.iValue=10;
	hobj1.fValue=20.10;
	
	hobj1.dobj1.i=20;
	hobj1.dobj1.f=30.44;
	
	printf("%d\n",hobj1.iValue);
	printf("%d\n",hobj1.dobj1.i);
 
    return 0;
}