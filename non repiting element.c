#include<stdio.h>
int main(){
	int a[10],i,j,size,count=1;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i>size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]==a[j] && i!=j){
			break;
			}
			if(j==size){
				printf("non-repiting element is: %d",a[i]);
				count++;
			}
		}
	}
	return 0;
}
