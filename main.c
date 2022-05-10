#include<stdio.h>
#include"Marvellous.h"

int main()
{
	struct demo obj;
	
	printf("Inside main\n");
	printf("Value of macro is %d\n",MAX);
	printf("size of struct is %d\n",sizeof(obj));
	
	fun();
	
	
	return 0;
}

void fun()
{
	printf("Inside fun");
}


//gcc main.c -o Myexe
//Myexe