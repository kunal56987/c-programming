#include<stdio.h>
void fact();
void fact(){
	int fact=1,num=10,i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("factrol of %d is %d ",num,fact);
}
int main(){
	fact();
	return 0;
}
