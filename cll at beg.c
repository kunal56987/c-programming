#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBeg(int);
void insertEnd(int);
void display();

void insertBeg(int val){
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
		newNode->next=head;
		temp->next=newNode;
		head=newNode;
	}
	printf("%d is inserted successfully..\n",val);
}
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
	insertBeg(10);
	insertBeg(20);
	insertBeg(30);
	insertBeg(40);
	insertBeg(50);
	instertEnd(999);
	display();
	return 0;
}
