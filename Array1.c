#include<stdio.h>

int main()

{
	
	//int no=11;
	
	int Arr[5];   //Array Defination
	//Arr is a one dimensional array, which contains 5 elements, and each element is of type integer.
	
	
	//Array member initialization
	//Member by member initialization
	Arr[0]=11;
	Arr[1]=21;
	Arr[2]=51;
	Arr[3]=101;
	Arr[4]=111;
	
	//Member initialization list
	int Brr[5]={11,21,51,101,111};
	
	int Crr[]={11,21,51,101,111};
	
	int Drr[];  //Error
	
	return 0;
	
}