#include<stdio.h>
void main()
{
	int a,b,c;
	float area,s;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=(float)(a+b+c)/2;
	area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
	printf("area of traingle:%f",area);
}
