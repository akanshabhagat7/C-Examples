#include<stdio.h>

struct Demo
{
    int i;
	struct Demo *ptr;

};


int main()
{
    struct Demo dobj1,dobj2,dobj3;
	
	struct Demo *p=&dobj1;
	
	dobj1.i=49;
	dobj1.ptr=&dobj2;
	
	dobj2.i=34;
	dobj2.ptr=&dobj3;
	
	dobj3.i=67;
	dobj3.ptr=NULL;
	
	printf("%d\n",dobj1.i);
	printf("%d\n",dobj1.ptr->ptr->i);
	
    return 0;

}