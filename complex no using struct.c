#include<stdio.h>
#include<string.h>
struct complex{
	int a;
	int b;
};
int main(){
	struct complex c;
	printf("enter the real part of complex no:");
	scanf("%d",&c.a);
	printf("Enter the imaginer part of complex no:");
	scanf("%d",&c.b);
	printf("complex no: %d+%di",c.a,c.b);
	return 0;
}
