#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int i,j,temp,a[SIZE];
void ascending();
void descending();
void ascending(){
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
} 
void descending(){
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(){
	int choise;
	printf("enter the arry\n");
	for(i=0;i<5;i++){
		printf("enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("inserted elements are\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	while(1){
		printf("choose one of following\n1.convert into ascending order\n2.convert into descending order\n3.exit\n");
		scanf("%d",&choise);
		switch(choise){
			case 1:
				ascending();
				break;
			case 2:
				descending();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Invalid choise");
		}
	}
return 0;
}
