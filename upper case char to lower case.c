#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the value in upper case");
	scanf("%c",&ch);
	ch=ch+32;
	printf("char in lower case=%c",ch);
}
