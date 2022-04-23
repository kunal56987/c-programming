#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert_specific(int,int);
void del_specific(int);
void display();
void del_specific(int pose){
	struct node *temp=head,*help=head;
	if(head==NULL){
		printf("there is notthimg to delete..\n");
	}
	else{
		if(pose==0){
			head=temp->next;
			free(temp);
		}
		else{
			while(pose!=0){
			help=temp;
			temp=temp->next;
			pose--;
			}
		help->next=temp->next;
		free(temp);
		temp=NULL;
			}
		}
		
		
}
void insert_specific(int val,int pose){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
	}
	else{
		struct node *temp=head;
		while(pose!=1){
			temp=temp->next;
			pose--;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	printf("%d inserted at specific position\n",val);
}
void display(){
	printf("nodes are\n");
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main(){
	insert_specific(10,0);
	insert_specific(20,1);
	insert_specific(30,1);
	insert_specific(40,2);
	display();
	del_specific(0);
	display();
	del_specific(1);
	display();
	return 0;
}
