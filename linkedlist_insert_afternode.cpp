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

struct Node * insertafternode(struct Node *head , int data , struct Node *prevnode){
	struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
	ptr->data = data;
	
	ptr->next = prevnode->next;
	prevnode->next=ptr;
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
	
	head = insertafternode(head,26,second);
	displaylinkedlist(head);
}
