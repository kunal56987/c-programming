#include<stdio.h>
#include<string.h>
int main(){
	char ch[10],temp;
	int i,j,k;
	printf("enter:");
	gets(ch);
	for(i=0;ch[i]!='\0';i++){
	}
	printf("%d\n",i);
	for(j=0;j<i-1;j++){
		for(k=0;k<i-1-j;k++){
			if(ch[k]>ch[k+1]){
		        temp=ch[k];
		        ch[k]=ch[k+1];
				ch[k+1]=temp;	
			}
		}
	}
	puts(ch);
	return 0;
}
