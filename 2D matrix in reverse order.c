#include<stdio.h>
int main(){
	int a[10][10],i,j,m,n;
	printf("enter the value of m:");
	scanf("%d",&m);
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the elements of matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("(%d,%d)value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix are\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("In reverse order\n");
	for(i=0;i<m;i++){
		for(j=n-1;j>=0;j--){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
