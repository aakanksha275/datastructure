#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void displaylist(struct Node *ptr){
	while(ptr!=NULL){
		printf("element is %d\n",ptr->data);
		ptr= ptr->next;
	}
}

struct Node * deletefirstnode (struct Node *head){
	struct Node *ptr =head;
	head = head->next;
	free(ptr);
	return head;
}

int main(){
	struct Node *head = (struct Node *) malloc (sizeof(struct Node));
	struct Node *second = (struct Node *) malloc (sizeof(struct Node));
	struct Node *third = (struct Node *) malloc (sizeof(struct Node));
	struct Node *last = (struct Node *) malloc (sizeof(struct Node));
	
	head->data = 7;
	head->next = second;
	
	second->data = 17;
	second->next = third;
	
	third->data = 27;
	third->next = last;
	
	last->data = 37;
	last->next = NULL;
	
	head = deletefirstnode(head);
	displaylist(head);
}
