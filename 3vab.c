#include<stdio.h>
void main()
{
	int a,b,t;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;printf("a=%d\nb=%d",a,b);
}
