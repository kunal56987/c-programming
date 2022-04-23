#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll_no;
	char name[20];
	char course[20];
};
int main(){
	struct student obj={10,"kunal","btech"};
	printf("************studrnt information**************\n");
	printf("Roll Number is %d\n",obj.roll_no);
	printf("Name is %s\n",obj.name);
	printf("Course is %s\n",obj.course);
	struct student obj1={11,"vipin","Mtech"};
	printf("************studrnt information**************\n");
	printf("Roll Number is %d\n",obj1.roll_no);
	printf("Name is %s\n",obj1.name);
	printf("Course is %s\n",obj1.course);
	struct student obj2={12,"aryan","Bsc"};
	printf("************studrnt information**************\n");
	printf("Roll Number is %d\n",obj2.roll_no);
	printf("Name is %s\n",obj2.name);
	printf("Course is %s\n",obj2.course);
	struct student obj3={13,"yuvraj","Msc"};
	printf("************studrnt information**************\n");
	printf("Roll Number is %d\n",obj3.roll_no);
	printf("Name is %s\n",obj3.name);
	printf("Course is %s\n",obj3.course);
}
