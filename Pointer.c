#include<stdio.h>

int main()
{
	int no = 11;
	
	int *p = &no;
	
	printf("Value of no is %d\n",no);
	printf("Base Address of no is %d\n",&no);
	
	printf("Value of p is %d\n",p);
	printf("Base Address of p is %d\n",&p);
	printf("Value where pointer is pointing is %d\n",*p);
	
	printf("Sizeof no is %d\n",sizeof(no));
	printf("Sizeof p is %d\n",sizeof(p));
	printf("Size of value where pointer is pointing is %d\n",sizeof(*p));
	
	
	return 0;
}
