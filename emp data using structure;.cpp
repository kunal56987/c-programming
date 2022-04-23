#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct empoley{
	int emp_id;
	char emp_name[20];
	char emp_branch[20];
};
struct empoley e;
int main(){
	e.emp_id=1024;
	strcpy(e.emp_name,"kunal");
	strcpy(e.emp_branch,"IT");
	printf("Empoley ID: %d\n",e.emp_id);
	printf("Empoley Name: %s\n",e.emp_name);
	printf("Emopeley Branch: %s",e.emp_branch);
	return 0;
}

