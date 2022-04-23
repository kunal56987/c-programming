#include<stdio.h>
void main()
{
	int n,h,m,s;
	printf("enter time in sec");
	scanf("%d",&n);
	h=n/3600;
	m=(n-(3600*h))/60;
	s=(n-(3600*h)-(m*60));
	printf("h:m:s-%d:%d:%d",h,m,s);
	
}

