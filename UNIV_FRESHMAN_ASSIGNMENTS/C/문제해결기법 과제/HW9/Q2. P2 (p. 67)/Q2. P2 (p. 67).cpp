#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct NUM {
	int key;
	struct NUM* next;

};


void Insert(struct NUM* head, int value)
{
	/* Start from head->next instead of head */
	struct NUM* p = head->next, * prev = head;
	struct NUM* new_node;
	int count = 0;
	new_node = (struct NUM*)malloc(sizeof(struct NUM));
	new_node->key = value;
	if (p->key < 0) {
		prev->next = new_node;
		new_node->next = p->next;

	}
	while (p) {
		if (p->key > value) break;
		prev = p;
		p = p->next;
		count++;
	}
	//if (count == 0) {
	//	new_node = (struct NUM*)malloc(sizeof(struct NUM));
	//	new_node->key = value;
	//
	//}
	prev->next = new_node; /* adjust next pointers */
	new_node->next = p;
	head->key++;
}
void ClearList(struct NUM* LIST) {
	struct NUM* temp = LIST->next;
	struct NUM* prev = NULL;
	printf("\nDeleting the linked list..\n");
	for (int i = 0; i < LIST->key;i++) {
		prev = temp;
		temp = temp->next;
		free(prev);
		printf("node[%d] deleted..\n", i);
	}
}
int main() {
	int nums[10] = { 17, 39, 11, 9, 42, 12, 15, 8, 13, 41 };
	struct NUM* nodes = (struct NUM*)malloc(10*sizeof(struct NUM));
	//insertion
	struct NUM* head=(struct NUM*)malloc(sizeof(struct NUM));
	head->next = nodes;
	head->key = 0;
	for (int i = 0; i < 7; i++) {
		nodes[i].next = NULL;
	}
	for (int i = 0; i < 10; i++) {
		printf("//---Inserting Key : %d\n", nums[i]);
		Insert(head, nums[i]);
		printf("[%d] elements. Key inserted..\n",head->key);
	}
	printf("");
	//travels
	printf("\nTraversing the linked list..\n");
	struct NUM* ptr = head->next;
	int count = 0;
	while (ptr != NULL) {
		printf("node[%d] key: %d\n", count, ptr->key);
		ptr = ptr->next;
		count++;
	}
	//

	ClearList(head);

	return 0;
}