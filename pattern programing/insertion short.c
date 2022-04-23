#include<stdio.h>
int main(){
	int i,j,a[5]={34,32,31,35,33},temp;
	printf("Befor shortting elements are\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
    printf("\n");
	for(i=1;i<5;i++){
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--){
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("After shorting elements are\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
