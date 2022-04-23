#include<stdio.h>
int main(){
	int a[10],size,i,sum=0,miss,total;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("enter %d location value:",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	total=(size+1)*(size+2)/2;
	printf("entered array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	miss=total-sum;
	printf("\nmissing element in array is %d",miss);
	return 0;
}
