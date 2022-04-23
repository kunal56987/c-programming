#include<stdio.h>
int main(){
	int a,i;
	for(a=1;a<=5;a++){
		for(i=5;i>=a;i--){
			printf(" %d ",a);
		}
		printf("\n");
	}
	return 0;
}
