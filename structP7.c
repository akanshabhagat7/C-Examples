#include<stdio.h>

struct Demo
{
	int i;
	struct Demo *p;	
};

int main()
{

   struct Demo dobj1,dobj2;
   
   struct Demo *ptr =&dobj1;
   
   dobj1.i=10;
   dobj1.p=&dobj2;
   
   dobj2.i=20;
   dobj2.p=NULL;
   
   printf("%d\n",dobj1.i);
   printf("%d\n",dobj1.p->i);
   
   return 0;
}