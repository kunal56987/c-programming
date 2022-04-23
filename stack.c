#include<stdio.h>

#define SIZE 5
int top=-1,stack[SIZE];
void push(int);
void pop();
void display();
void peek();
void push(int val){
	if(top==SIZE-1){
		printf("theris is no space to insert an element....\n");
	}
	else{
		top++;
		stack[top]=val;
		printf("%d insert successfully....\n",val);
	}
}
void pop(){
	if(top==-1){
		printf("their is notthing to delete..\n");
	}
	else{
		printf("%d deleated successfully....\n",stack[top]);
		top--;
	}
}
void display(){
	int i;
	if(top==-1){
		printf("their is notthing to display....\n");
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
void peek(){
	if(top==-1){
		printf("their is notthing to peek.....\n");
	}
	else{
		printf("%d is peeked successfully....\n",stack[top]);
	}
}

int main(){
	int ele,choise;
	while(1){
		printf("choose one of the foolowing\n1.to insert an element\n2.to delete\n3.to display\n4.to peek\n5.exit\n");
		scanf("%d",&choise);
		switch(choise){
			case 1:
				printf("enter a element u want to insert");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid choise...\n");
		}
	}
	return 0;
}
































