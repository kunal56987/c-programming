#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert_Beg(int);
void del_beg();
void display();
void del_beg(){
	struct node *temp=head;
	if(head==NULL){
		printf("Notthing to delete\n");
	}
	else{
		head=temp->next;
		free(temp);
		printf("delected successfully...\n");
		}
	}

void display(){
	printf("nodes are\n");
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void insert_Beg(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
	printf("%d inserted sussfully....\n",val);
}
int main(){
	insert_Beg(10);
	insert_Beg(20);
	insert_Beg(30);
	insert_Beg(40);
	insert_Beg(50);
	del_beg();
	display();
}
