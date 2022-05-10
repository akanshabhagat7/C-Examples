#include<stdio.h>

int main()
{
	int no =11;
	int Data[4]={10,20,30,40};
	
    /*int Data[4];
	
	int Data[0] = 10;
	int Data[1] = 20;
	int Data[2] = 30;
	int Data[3] = 40;*/
	
	printf("Value of no is %d\n",no);
	printf("Address of Variable no is %d\n",&no);
	
	printf("First element of Array is %d\n",Data[0]);
	printf("Base Address of Array is %d\n",Data);
	printf("Base Address of first element of Array is %d\n",&Data[0]);
	printf("Base Address of Second element of Array is %d\n",&Data[1]);
	printf("Base Address of Third element of Array is %d\n",&Data[2]);
	
	printf("Sizeof Variable no is %d\n",sizeof(no));
	printf("Sizeof Array is %d\n",sizeof(Data));
	printf("Sizeof First element of Array is %d\n",sizeof(Data[0]));
	
	
	
	return 0;
	
}
