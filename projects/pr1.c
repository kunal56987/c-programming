#include<stdio.h>
int main(){
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=6;i++){
			if(i==1 || i==5 || a==i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(i=5;i<=9;i++){
			if(a==1 || a==5 || i==7){
				printf("*");
			}
			else if(i==10 || a==1){
				printf(" ");
			}
			else{
				printf(" ");
			}
		}
		for(i=9;i<=10;i++){
			printf(" ");
		}
		for(i=11;i<=15;i++){
			if(a==1 || i==13){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
