#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert_end(int);
void del_end();
void display();
void del_end(){
	struct node *temp=head,*help=head;
	if(head==NULL){
		printf("There is notthing to delete\n");
	}
	else{
		while(temp->next!=NULL){
			help=temp;
			temp=temp->next;
		}
		help->next=NULL;
		free(temp);
		printf("last element deleted successfully.....\n");
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
	printf("%d inserted successfully.....\n",val);
}
int main(){
	insert_end(10);
	insert_end(20);
	insert_end(30);
	insert_end(40);
	display();
	del_end();
	display();
}
