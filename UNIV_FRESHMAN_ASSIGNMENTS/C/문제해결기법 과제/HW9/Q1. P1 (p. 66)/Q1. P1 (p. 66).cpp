#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct NODE {
	int key;
	struct NODE* next;

};
int InsertKey(struct NODE* head, int value, struct NODE** address_of_new_first_node)
{
	/* Start from head->next instead of head */
	struct NODE* p = head->next, * prev = head;
	struct NODE* new_node;
	int found=0;
	int count = 0;
	while (p) {
		if (p->key > value)
		{
			found = 0;
			break;
		}
		else if (p->key == value)
		{
			found = -1;
			return found;
		}
		count++;//to found new head
		prev = p;
		p = p->next;
	}
	if (count) {
		new_node = (struct NODE*)malloc(sizeof(struct NODE));
		new_node->key = value;

		prev->next = new_node; /* adjust next pointers */
		new_node->next = p;
		*address_of_new_first_node = NULL;
		
	}
	else if (count == 0) {
		new_node = (struct NODE*)malloc(sizeof(struct NODE));
		new_node->key = value;
		   
		prev->next = new_node; /* adjust next pointers */
		new_node->next = p;
		
		*address_of_new_first_node= new_node;
	}

	return found;
}
void ScanList(struct NODE* node) {
	printf("\nTraversing the linked list..\n");
	struct NODE* ptr= node->next;
	int count = 0;
	while (ptr != NULL) {
		printf("node[%d] key: %d\n",count,ptr->key);
		ptr = ptr->next;
		count++;
	}
}
int main() {
	struct NODE nodes[7];
	struct NODE *head= (struct NODE*)malloc(sizeof(struct NODE));
	struct NODE** address_of_head;
	struct NODE* new_head = head;
	address_of_head = &new_head;
	for (int i = 0; i < 7; i++) {
		nodes[i].next = NULL;
	}
	nodes[0].key = 100;
	nodes[1].key = 250;
	nodes[2].key = 467;

	nodes[0].next = &nodes[1];
	nodes[1].next = &nodes[2];

	head->next = &nodes[0];

	int keys[4] = {250,300,50,500}; 




	//insertion
	for (int i = 0; i < sizeof(keys)/sizeof(int); i++) {
		printf("//---Inserting Key : %d\n", keys[i]);
		if (InsertKey(head, keys[i], address_of_head) == 0) {
			printf("Key inserted..\n");
			if (new_head)
				printf("New first node created..\n");
		}
		else {
			printf("Key already exists..\n");
		}

	}
	//


	//travel
	ScanList(head);

	//
	return 0;
}