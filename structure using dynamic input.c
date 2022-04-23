#include<stdio.h>
#include<string.h>
struct empoley{
	int id;
	char name[20];
	char branch[20];
};
int main(){
	struct empoley e;
	printf("enter the id:");
	scanf("%d",&e.id);
	printf("Enter Empoley name:");
	gets(e.name);
	printf("enter Empoeley course:");
	gets(e.branch);
	printf("************Empoeley information**************\n");
	printf("empoeley id: %d\n",e.id);
	printf("Empoeley name: %s\n",e.name);
	printf("Empoeley course: %s",e.branch);
	return 0;
}
