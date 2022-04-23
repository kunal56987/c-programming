#include<stdio.h>
struct dist{
	int a,b;
};
struct dist d;
struct dist *p=&d;
int main(){
	printf("enter value of a:");
	scanf("%d",&p->a);
	printf("enter value of b:");
	scanf("%d",&p->b);
	printf("%u\n",&p->a);
	printf("%u\n",&p->b);
	int dt=(p->a)-(p->b);
	printf("%u\n",dt);
	return 0;
}
