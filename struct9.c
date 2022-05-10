#include<stdio.h>

struct Hello
{
    const int i;
	const float f;

};


int main()
{
    struct Hello hobj={12,31.3};
	
	//hobj.i=12;     Error
	//hobj.f=31.3;   Error
	
	printf("%d\n",hobj.i);
	printf("%f\n",hobj.f);

    return 0;
}
