#include<stdio.h>
int main()
{
	int a,i,s;
	for(a=1;a<=4;a++){
		for(s=4;s>=a;s--){
			printf(" ");
		}
		for(i=1;i<=a;i++){
			printf(" *");
		}
	
		printf("\n");
	}
	for(a=1;a<=5;a++){
		for(s=2;s<=a;s++){
			printf(" ");
		}
		for(i=5;i>=a;i--){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
