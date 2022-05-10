#include<stdio.h>

struct Hello
{
	int iValue;
	float fValue;
	
	struct Demo
	{
		int i;
		float f;		
	}dobj1;
		
};


int main()
{
	//struct Demo dobj1;           Error
    struct Hello hobj1;
	
	hobj1.iValue=20;
	hobj1.fValue=42.1;
	
	hobj1.dobj1.i=50;
	hobj1.dobj1.f=1.2;
	
	printf("%f\n",hobj1.fValue);
	printf("%f\n",hobj1.dobj1.f);
   
   return 0;

}
