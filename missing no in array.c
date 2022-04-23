#include<stdio.h>
int main(){
	int a[10],size,i,sum=0;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	for(i=0;i>size;i++){
		printf("enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	return 0;
}
