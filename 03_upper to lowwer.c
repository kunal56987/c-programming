#include<stdio.h>
int main() // to display upper case to lower case or vice varsa
{
	char ch; // ch jo hai varabile hai
	printf("enter a character ");
	scanf("%c",&ch);
	ch=ch+32;
	printf("%c",ch);
	
	return 0;
	
}
