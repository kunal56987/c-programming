#include<stdio.h>
int main(){
	int a[4][4],b[4],i,j;
	for(i=0;i<4;i++){
		printf("enter the marks of 4 subject of student %d\n",i+1);
		for(j=0;j<4;j++){
			printf("enter mark of %d subject: ",j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++){
		b[i]=0;
		for(j=0;j<4;j++){
			
			if(a[i][j]>b[i]){
				b[i]=a[i][j];
			}
		}
	}
	for(i=0;i<4;i++){
		printf("max mark in %d subject is %d",i+1,b[i]);
	}
	return 0;
}
