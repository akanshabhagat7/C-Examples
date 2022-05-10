#include<stdio.h>

int Addition(int no1,int no2)
{
   int Ans;
   Ans=no1+no2;
   
   return Ans;
   
}

int main()
{
   int A=10;
   int B=11;
   int C=0;
   
   C=Addition(A,B);
   
   printf("%d",C);

   return 0;
}