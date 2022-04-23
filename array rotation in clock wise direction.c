#include<stdio.h>
int main(){
	int a[10],size,i,temp;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	temp=a[size-1];
	for(i=size-1;i>=0;i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
