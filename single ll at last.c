#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert_end(int);
void display();
void display(){
	printf("nodes are\n");
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void insert_end(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
	}
}
int main(){
	insert_end(10);
	insert_end(20);
	insert_end(30);
	insert_end(40);
	display();
}
