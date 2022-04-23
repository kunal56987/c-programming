#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int a=DETECT,b,i;
	initgraph(&a,&b,"C:\Users\kunal srivastava\Desktop\c programing");
	for(i=2;i<=220;i=i+2){
		circle(320,240,i);
	}

	return 0;
}
