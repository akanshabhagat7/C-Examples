#include<stdio.h>

int main()
{
    char cValue = 'A';
    char *cptr = &cValue;
   
    int iValue = 11;
    int *iptr = &iValue;
   
    float fValue = 10.11;
	float *fptr = &fValue;
   
    double dValue = 20.11;
	double *dptr = &dValue;
	
	printf("cValue is %c\n",cValue);     //A
	printf("iValue is %d\n",iValue);     //11
	printf("dvalue is %f\n",dValue);     //20.11
	printf("\n");
	printf("Value in pointer cptr is %d\n",cptr);    //100
	printf("Value in pointer iptr is %d\n",iptr);    //200
	printf("Value in pointer dptr is %d\n",dptr);	 //400
	printf("\n");
	printf("Address of cValue is %d\n",&cValue);     //100
	printf("Address of iValue is %d\n",&iValue);     //200
	printf("Address of dValue is %d\n",&dValue);     //400
	printf("\n");
	printf("Address of pointer cptr is %d\n",&cptr);  //500
	printf("Address of pointer iptr is %d\n",&iptr);   //600
	printf("Address of pointer dptr is %d\n",&dptr);   //800
	printf("\n");
	printf("Vaue at which pointer is pointing is %c\n",*cptr); //11
	printf("Vaue at which pointer is pointing is %d\n",*iptr); //A
	printf("Vaue at which pointer is pointing is %f\n",*dptr);  //20.11
	printf("\n");
	printf("Sizeof cValue is %d\n",sizeof(cValue));    //1
	printf("Sizeof iValue is %d\n",sizeof(iValue));    //4
	printf("Sizeof dValue is %d\n",sizeof(dValue));    //8
	printf("\n");
	printf("Sizeof pointer cptr is %d\n",sizeof(cptr));  //8
	printf("Sizeof pointer iptr is %d\n",sizeof(iptr));   //8
	printf("Sizeof pointer dptr is %d\n",sizeof(dptr));   //8
	printf("\n");
	printf("Sizeof value where pointer cptr is pointing is %d\n",sizeof(*cptr));  //1
	printf("Sizeof value where pointer iptr is pointing is %d\n",sizeof(*iptr));  //4 
	printf("Sizeof value where pointer dptr is pointing is %d\n",sizeof(*dptr));  //8
   
    return 0;
}