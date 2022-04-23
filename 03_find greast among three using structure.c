#include<stdio.h>
struct numbers{
	int a,b,c;
};
struct numbers n;
int main(){
	printf("enter first no:");
	scanf("%d",&n.a);
	printf("Enter secound no:");
	scanf("%d",&n.b);
	printf("Enter thired no:");
	scanf("%d",&n.c);
	if(n.a>n.b&&n.a>n.c){
		printf("first no. is greater\n");
	}
	else if(n.b>n.a&&n.b>n.c){
		printf("secound no. is greater\n");
	}
	else{
		printf("thired one is greater\n");
	}
	return 0;
}
