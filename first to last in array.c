#include<stdio.h>
int main(){
	int a[10],size,temp,i;
	printf("Enter the Size of array:");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	temp=a[0];
	a[0]=a[size-1];
	a[size-1]=temp;
	printf("array are\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
