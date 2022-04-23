#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the sides:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b || a==c && b!=c)
	{
		printf("Equilater triangle");	
	}
	else if (a==b && b==c && a==c)
	{
		printf("isoseles triangle");
	}
	else 
	{
		printf("scalene triangle");
		
	}
}
