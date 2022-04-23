#include<stdio.h>
void main()
{
	int i;
	float num,d;
	printf("Enter the no:");
	scanf("%f",&num);
	i=(int)num;
	d=(float)num-i;
	printf("integer=%d\nxdecimal=%f",i,d);
}
