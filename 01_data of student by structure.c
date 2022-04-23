#include<stdio.h>
struct student{
	int reg_no,marks;
	char name[20],branch[20];
};
struct student s;

int main(){
	printf("Enter your registration no. :");
	scanf("%d",&s.reg_no);
	printf("Enter your name:");
	fflush(stdin);
	gets(s.name);
	printf("Enter your Branch:");
	fflush(stdin);
	gets(s.branch);
	printf("Enter your marks:");
	scanf("%d",&s.marks);
	
	printf("**********************student Detiles**********************\n");
	printf("name=%s\n",s.name);
	printf("Reg.no=%d\n",s.reg_no);
	printf("Branch=%s\n",s.branch);
	printf("Marks=%d\n",s.marks);
	
	return 0;
}
