#include<stdio.h>
int main(){
	char i;
	int j;
	for(i='e';i>='a';i--){
		for(j=1;j<=5;j++){
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
