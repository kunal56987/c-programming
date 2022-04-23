#include<stdio.h>
int main(){
	int a[10],i,j,size,min,max,temp,maxp,minp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements of array:\n");
	for(i=0;i<size;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=1;i<size;i++){
			if(min>a[i]){
				min=a[i];
				minp=i;
			}
			else if(max<a[i]){
				max=a[i];
				maxp=i;
			}
		}
	printf("max value=%d\n",max);
	printf("min value=%d\n",min);
	temp=a[maxp];
	a[maxp]=a[minp];
	a[minp]=temp;
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
