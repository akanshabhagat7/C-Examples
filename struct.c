#include<stdio.h>

struct demo
{
    int iValue;
	float fvalue;
};


int main()
{
    //struct demo *ptr = &obj1;
	
	struct demo obj1;
	
	struct demo *ptr=&obj1;

    
	ptr->iValue=20;
	
	printf("%d\n",ptr->iValue);
    return 0;
}
