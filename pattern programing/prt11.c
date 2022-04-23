#include<stdio.h>
int main(){
	int a,i;
	for(a=1;a<=5;a++){
		for(i=5;i>=1;i--){
			if(i<=a){
				printf("%d",i);
			}
			else{
				printf(" ");
			}
		}

		printf("\n");
	}
	return 0;
}
