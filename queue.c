#include<stdio.h>
#define SIZE 5
int f=0,r=-1,QUEUE[SIZE];
void enqueue(int val){
	if(r==SIZE-1){
		printf("instersion not possible....Queue is full...\n");
	}
	else{
		r++;
		QUEUE[r]=val;
		printf("%d insertrd successfully......\n",val);
	}
}
void diqueue(){
	if(r==-1){
		printf("delesion not possible.... Queue is empty....\n");
	}
	else{
		printf("%d deleted successfully....\n",QUEUE[f]);
		f++;
	}
}
void display(){
	if(r==-1){
		printf("Queue is empty....their is nothing to display...\n");
	}
	else{
		int i;
		for(i=f;i<=r;i++){
			printf("%d ",QUEUE[i]);
		}
	}
	printf("\n");
}
int main(){
	int choise,val;
	while(1){
		printf("choose one of the following\n1.insert a value\n2.deletion\n3.display\n4.exit\n");
		scanf("%d",&choise);
		switch(choise){
			case 1:
				printf("enter the value you want to insert:");
				scanf("%d",&val);
				enqueue(val);
				break;
			case 2:
				diqueue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Ivalid choise..\n");
		}
	}
}
