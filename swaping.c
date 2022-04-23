#include<stdio.h>
int main(){
	char arry[3]={'c','b','a'};
	int i,j,temp;
	for (i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(arry[i]>arry[j]){
				temp=arry[i];
				arry[i]=arry[j];
				arry[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%c\t",arry[i]);
	}
	return 0;
}
