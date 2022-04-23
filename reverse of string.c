#include<stdio.h>
#include<string.h>
int main(){
	char ch[10],temp;
	int i,j;
	printf("enter:");
	gets(ch);
	for(i=0;ch[i]!='\0';i++){
	}
	printf("%d\n",i);
	for(j=0;j<i-1;j++){
		temp=ch[j];
		ch[j]=ch[i-1];
		ch[i-1]=temp;
		i--;
	}
	puts(ch);
	return 0;
}
