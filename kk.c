#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	int i;
	printf("Enter a string:");
	gets(name);
	for(i=0;i<strlen(name);i++){
		if(name[i]==' '){
			name[i]='*';
		}
	}
	puts(name);
	return 0;
	
}
