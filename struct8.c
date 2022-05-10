#include<stdio.h>

struct Demo
{
    int i;
	float f;
	

};

int main()
{
    const struct Demo dobj={11,12.33};
	//dobj.i=11;                Error
	//dobj.f=12.33;             Error
	
	printf("%d\n",dobj.i);
	printf("%f\n",dobj.f);


    return 0;
}