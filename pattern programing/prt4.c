#include<stdio.h>
int main(){
	int a,i;
	for(a=1;a<=5;a++){
		for(i=1;i<=a;i++){
			printf("%d",a+4);
		}
		printf("\n");
	}
	return 0;
}
