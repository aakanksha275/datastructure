#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void displaylinkedlist(struct Node *ptr){
	while(ptr!=NULL){
		printf("element is %d\n",ptr->data);
		ptr = ptr->next;
	}
}

struct Node * insertatbtw(struct Node *head , int data ,int index){
	
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node * p =head;
	ptr->data = data;
	int i=0;
	
	while(i!=index-1){
		p = p->next;
		i++;
	}

	ptr->next = p->next;  
	p->next =ptr;
	return head;
}
   
int main(){
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 7;
	head->next = second;

	second->data = 17;
	second->next = third;
	
	third->data = 37;
	third->next = last;
	
	last->data = 47;
	last->next = NULL;
	
	head = insertatbtw(head,26,1);
	displaylinkedlist(head);
}
