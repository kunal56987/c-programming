#include<stdio.h>
void fact(int);
void fact(int num){
	int fact=1,i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("factroil of the given no is %d",fact);

}
int main(){
	fact(8);
	return 0;
}
