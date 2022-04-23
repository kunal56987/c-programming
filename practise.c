#include<stdio.h>
int main(){
	int a[10],i,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the element of array\n");
	for(i=0;i<size;i++){
		printf("enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("Brefore inserting\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	for(i=size-1;i>=0;i--){
		a[i-1]=a[i];
	}
	size--;
	printf("\nBrefore inserting\n");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
