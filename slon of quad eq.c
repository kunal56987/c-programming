#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float x1,x2;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	x1=(float)(-b+sqrt(b*b-4*a*c))/2*a;
	x2=(float)(-b-sqrt(b*b-4*a*c))/2*a;
	printf("%f",x1);
	printf("\n%f",x2);
}
