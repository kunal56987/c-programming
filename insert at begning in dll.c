#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *priv;
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertbeg(int);
void display();

void display(){
	struct node *temp=head;
	if(temp==NULL){
		printf("their is notthing to display...\n");
	}
	else{
		printf("forword Direction\n");
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void insertbeg(int val){
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL){
		newNode->next=NULL;
		newNode->priv=NULL;
		head=newNode;
	}
	else{
		head->priv=newNode;
		newNode->next=head;
		newNode->priv=NULL;
		head=newNode;
	}
	printf("%d is inserted successfully...\n",val);
}
int main(){
	insertbeg(10);
	insertbeg(20);
	insertbeg(30);
	insertbeg(40);
	insertbeg(50);
	display();
	
	
	
	return 0;
}
