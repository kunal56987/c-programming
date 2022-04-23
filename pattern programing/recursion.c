#include<stdio.h>
int fun(int n){
	if(n==0){
		return 0;
	}
	else{
		printf("%d\n",n);
		return fun(n-1);
	}
}
int main(){
	fun(5);
	return 0;
}
