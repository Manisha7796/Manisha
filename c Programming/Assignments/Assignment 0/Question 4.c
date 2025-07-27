#include<stdio.h>

void main()
{
	int Temp,b=10,c=20;
	Temp=b;
	b=c;
	c=Temp;
	printf("after swap %d",b);
	printf("after swap %d",c);
}