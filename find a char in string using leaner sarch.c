#include<stdio.h>
#include<string.h>
int main(){
	char name[20],ch;
	int i,found=0;
	printf("enter your name:");
	gets(name);
	printf("Enter a character that u want to surch:");
	ch=getchar();
	for(i=0;i<strlen(name);i++){
		if(name[i]==ch){
			found=1;
			break;
		}
	}
	if(found==1){
		printf("%c is present in %s",ch,name);
	}
	else{
		printf("%c is not present in %s",ch,name);
	}
	return 0;
}
