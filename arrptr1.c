#include<stdio.h>


int main()
{

    int Arr[5]={10,20,30,40,50};
	
	int *p = Arr;
	
	printf("%d\n",Arr);         //100
	printf("%d\n",&Arr[0]);      //100
	printf("%d\n",&Arr);        //100
	printf("%d\n",Arr+1);       //104
	printf("%d\n",(&Arr)+1);    //120
	printf("%d\n",sizeof(Arr));  //20
	
	
	printf("%d\n",Arr[2]);
	printf("%d\n",*(Arr+2));
	printf("%d\n",*(2+Arr));
	printf("%d\n",2[Arr]);
	return 0;

}

/*
      Arr[2];
	  
	  *(Arr+2);
	  
	  *(2+Arr);
	  
	  2[Arr];


*/