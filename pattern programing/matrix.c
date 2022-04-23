#include<stdio.h>
int main(){
	int a[4][5],i,j;
	printf("enter the value for matrix\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("enter (%d,%d) location value",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=4;j>=0;j--){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
