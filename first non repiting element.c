#include<stdio.h>
int main(){
	int a[10],i,j,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		for(j=0;j<=size;j++){
			if(j==size){
				printf("%d",a[i]);
				return;
			}
			if(i!=j&&a[i]==a[j]){
				break;
			}
		}
	}
	return 0;
}
