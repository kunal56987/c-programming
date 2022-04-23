#include<stdio.h>
int main(){
	int a[6][4][3],i,j,k,key,
	found=0;
	printf("enter the value for matrix\n");
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			for(k=0;k<3;k++){
			
			printf("enter (%d,%d,%d) location value",i,j,k);
			scanf("%d",&a[i][j][k]);
		}
	}
	}
	printf("enter the value that u want to surch");
	scanf("%d",&key);
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			for(k=0;k<3;k++){
				if(a[i][j][k]==key){
					found=1;
					break;
				}
		}
	}
	}
	if(found==1){
		printf("succes");
	}
	else{
		printf("fail");
	}
	
	return 0;
}
