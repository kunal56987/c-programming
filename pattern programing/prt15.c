#include<stdio.h>
int main(){
	int a,i,s,n;
	for(n=1;n<=3;n++){
		for(a=1;a<=5;a++){
			for(s=4;s>=a;s--){
				printf(" ");
			}
			for(i=1;i<=a;i++){
				printf(" *");
			}
			printf("\n");
		}
	}
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(i==4 || i==4){
				printf("  *");
			}
			else if(a==5 || a==5){
				printf(" *");
			}
			else{
				printf(" ");
			}
			}
			printf("\n");
		}
		return 0;
	}

