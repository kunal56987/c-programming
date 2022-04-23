#include<stdio.h>
int main(){
	char name[19]="";
	int i;
	printf(" enter a name:");
	gets(name);
	for(i=0;i<19;i++){
		if(name[i]==32){
			printf("*");
			break;
		}
	}
	printf("%s",name);
	return 0;
}
