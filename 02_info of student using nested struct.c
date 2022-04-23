#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[20],clg_name[20];
	int marks;
	
	
	struct dete_of_birth{
		int dd,mm,yy,reg_no;
	}ns;
};
struct student s;
int main(){
	printf("Enter your name:");
	fflush(stdin);
	gets(s.name);
	printf("Enter college name:");
	fflush(stdin);
	gets(s.clg_name);
	printf("Enter your DOB[DD MM YY] format:");
	scanf("%d%d%d",&s.ns.dd,&s.ns.mm,&s.ns.yy);
	printf("enter your reg.no:");
	scanf("%d",&s.ns.reg_no);
	printf("Enter your marks:");
	scanf("%d",&s.marks);
	printf("**********************student Detiles**********************\n");
	printf("name=%s\n",s.name);
	printf("Reg.no=%d\n",s.ns.reg_no);
	printf("D.O.B=%d/%d/%d\n",s.ns.dd,s.ns.mm,s.ns.yy);
	printf("clg.name=%s\n",s.clg_name);
	printf("Marks=%d\n",s.marks);
	
	return 0;
}
