#include<stdio.h>
int fact();
int fact(){
	int fact=1,num=10,i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;

}
int main(){
	int result;
	result=fact();
	printf("factroil of given no. is %d",result);
	return 0;
}
