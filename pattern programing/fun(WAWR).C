#include<stdio.h>
int fact(int);
int fact(int num){
	int fact=1,i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;

}
int main(){
	int result;
	result=fact(9);
	printf("factroil of given no is %d",result);
	return 0;
}
