#include<stdio.h>
#include<string.h>
struct empoley{
	int id;
	char name[20];
	struct dept{
		char desg[20];
		float sal;
	}d;
};
struct empoley e;
int main(){
	printf("Enter Employee id:");
	scanf("%d",&e.id);
	printf("Enter employee name:");
	fflush(stdin);
	gets(e.name);
	printf("Enter Employee Designation:");
	fflush(stdin);
	gets(e.d.desg);
	printf("Enter Employee salary:");
	scanf("%f",&e.d.sal);
	printf("***********Employee Deatiles***********\n");
	printf("empolyee id: %d\n",e.id);
	printf("Empolyee Name: %s\n",e.name);
	printf("Employee designation: %s\n",e.d.desg);
	printf("Employee salary: %f",e.d.sal);
	return 0;
}
