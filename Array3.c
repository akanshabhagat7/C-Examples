#include<stdio.h>

int main()
{

  int Arr[4];
  
  int Arr[0]=10;
  int Arr[1]=11;
  int Arr[2]=12;
  int Arr[3]=13;
  
  int Brr[3][4];
  
  int Brr[0][0]= 20;
  int Brr[0][1]=30;
  int Brr[0][2]= 40;
  int Brr[0][3]=50;
  int Brr[2][1]=60;
  
  return 0;
}

int no =11;
int *iptr= &no;

no              //11
ptr             //100
&no             //100
&ptr            //200
*ptr            //11
sizeof no       //4
sizeof ptr      //8
sizeof *ptr     //4