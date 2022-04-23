#include<stdio.h>
int main(){
	char arry[8]={'s','u','r','n','d','r','a'},key;
	int i,found=0;
	
	printf("enter the char u want to surch:");
	scanf("%c",&key);
	for(i=0;i<8;i++){
		if(arry[i]==key){
			found=1;
			break;
		}
	}
	if(found==1){
		printf("found");
	}
	else{
		printf("not found");
	}
	return 0;
	
}
