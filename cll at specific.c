#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertSpecific(int,int);
void display();
void insertSpecific(int val,int pose){
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL){
		newNode->next=newNode;
		head=newNode;
	}
	else{
		struct node *temp=head;
		int i=0;
		while(i!=pose-1){
			temp=temp->next;
			i++;
		}
		newNode->next=temp->next;
		temp->next=newNode;
		
	}
	printf("%d insert at end successfully...\n",val);
}
void display(){
	struct node *temp=head;
	if(temp==NULL){
		printf("their is notthing to display.../n");
	}
	else{
		printf("forword direction\n");
		do{
			printf("%d\n",temp->data);
			temp=temp->next;
		}while(temp!=head);
	}
}
int main(){
	insertSpecific(10,1);
	insertSpecific(20,1);
	insertSpecific(30,1);
	insertSpecific(40,2);
	
	display();
	}
