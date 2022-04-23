#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(a==3 && i==3){
				printf("x");
			}
		else if(a==1 || i==5){
			printf("1");
		}
		else if(a==1 || i==1){
			printf("1");
		}
		else if(a==5 || i==1){
			printf("1");
		}
		else{
			printf(" ");
		}	
		}
		printf("\n");
	}
	
	return 0;
}
