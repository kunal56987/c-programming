#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertEnd(int);
void display();
void insertEnd(int val){
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL){
		newNode->next=newNode;
		head=newNode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=head;
		
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
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertEnd(50);
	display();
	}
